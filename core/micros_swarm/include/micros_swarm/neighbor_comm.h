/**
Software License Agreement (BSD)
\file      neighbor_comm.h 
\authors Xuefeng Chang <changxuefengcn@163.com>
\copyright Copyright (c) 2016, the micROS Team, HPCL (National University of Defense Technology), All rights reserved.
Redistribution and use in source and binary forms, with or without modification, are permitted provided that
the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the
   following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
   following disclaimer in the documentation and/or other materials provided with the distribution.
 * Neither the name of micROS Team, HPCL, nor the names of its contributors may be used to endorse or promote
   products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WAR-
RANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, IN-
DIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef NEIGHBOR_COMM_H_
#define NEIGHBOR_COMM_H_

#include <iostream>

#include "micros_swarm/runtime_platform.h"
#include "micros_swarm/listener_helper.h"
#include "micros_swarm/comm_interface.h"
/*#ifdef ROS
#include "micros_swarm/ros_comm.h"
using namespace micros_swarm;
#endif
#ifdef OPENSPLICE_DDS
#include "opensplice_dds_comm/opensplice_dds_comm.h"
using namespace opensplice_dds_comm;
#endif*/

namespace micros_swarm{
    
    template<class Type>
    class Broadcaster{
        public:
            Broadcaster(const std::string& key)
            {
                key_=key;
                rtp_=Singleton<RuntimePlatform>::getSingleton();
                communicator_=Singleton<CommInterface>::getExistedSingleton();
            }
            
            void broadcast(const Type& value)
            {
                std::ostringstream archiveStream;
                boost::archive::text_oarchive archive(archiveStream);
                archive<<value;
                std::string value_str=archiveStream.str();
                
                NeighborBroadcastKeyValue nbkv(key_, value_str);
                
                std::ostringstream archiveStream2;
                boost::archive::text_oarchive archive2(archiveStream2);
                archive2<<nbkv;
                std::string nbkv_str=archiveStream2.str();  
                
                micros_swarm::CommPacket p;
                p.packet_source=rtp_->getRobotID();
                p.packet_version=1;
                p.packet_type=NEIGHBOR_BROADCAST_KEY_VALUE;
                p.packet_data=nbkv_str;
                p.package_check_sum=0;
                
                //communicator_->broadcast(p);
                rtp_->getOutMsgQueue()->pushNcMsgQueue(p);
            }
        private:
            boost::shared_ptr<RuntimePlatform> rtp_;
            boost::shared_ptr<CommInterface> communicator_;
            std::string key_;
    };
    
    template<typename Type>
    class Listener{
        public:        
            Listener(const std::string& key, const boost::function<void(const Type&)>& callback)
            {
                key_=key;
                rtp_=Singleton<RuntimePlatform>::getSingleton();
                
                helper_.reset(new ListenerHelperT<Type>(key, callback));
                rtp_->insertOrUpdateListenerHelper(key_, helper_);
            }
            
            void ignore()
            {
                rtp_->deleteListenerHelper(key_);
            }
        private:
            std::string key_;
            boost::shared_ptr<RuntimePlatform> rtp_;
            boost::shared_ptr<ListenerHelper> helper_;
    };
};
#endif