//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GSDFPacketDcps.cpp
//  Source: gencxx/GSDFPacketDcps.idl
//  Generated: Thu Jun  1 21:09:08 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "opensplice_dds_broker/GSDFPacketDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < opensplice_dds_broker::GSDFPacket, struct GSDFPacketSeq_uniq_>;
#endif

const char * opensplice_dds_broker::GSDFPacketTypeSupportInterface::_local_id = "IDL:opensplice_dds_broker/GSDFPacketTypeSupportInterface:1.0";

opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr opensplice_dds_broker::GSDFPacketTypeSupportInterface::_duplicate (opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_broker::GSDFPacketTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_broker::GSDFPacketTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr opensplice_dds_broker::GSDFPacketTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_broker::GSDFPacketTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr opensplice_dds_broker::GSDFPacketTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr result;
   result = dynamic_cast < opensplice_dds_broker::GSDFPacketTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_broker::GSDFPacketDataWriter::_local_id = "IDL:opensplice_dds_broker/GSDFPacketDataWriter:1.0";

opensplice_dds_broker::GSDFPacketDataWriter_ptr opensplice_dds_broker::GSDFPacketDataWriter::_duplicate (opensplice_dds_broker::GSDFPacketDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_broker::GSDFPacketDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_broker::GSDFPacketDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_broker::GSDFPacketDataWriter_ptr opensplice_dds_broker::GSDFPacketDataWriter::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataWriter_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_broker::GSDFPacketDataWriter::_local_id))
   {
      result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_broker::GSDFPacketDataWriter_ptr opensplice_dds_broker::GSDFPacketDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataWriter_ptr result;
   result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_broker::GSDFPacketDataReader::_local_id = "IDL:opensplice_dds_broker/GSDFPacketDataReader:1.0";

opensplice_dds_broker::GSDFPacketDataReader_ptr opensplice_dds_broker::GSDFPacketDataReader::_duplicate (opensplice_dds_broker::GSDFPacketDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_broker::GSDFPacketDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_broker::GSDFPacketDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_broker::GSDFPacketDataReader_ptr opensplice_dds_broker::GSDFPacketDataReader::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataReader_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_broker::GSDFPacketDataReader::_local_id))
   {
      result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_broker::GSDFPacketDataReader_ptr opensplice_dds_broker::GSDFPacketDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataReader_ptr result;
   result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_broker::GSDFPacketDataReaderView::_local_id = "IDL:opensplice_dds_broker/GSDFPacketDataReaderView:1.0";

opensplice_dds_broker::GSDFPacketDataReaderView_ptr opensplice_dds_broker::GSDFPacketDataReaderView::_duplicate (opensplice_dds_broker::GSDFPacketDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_broker::GSDFPacketDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_broker::GSDFPacketDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_broker::GSDFPacketDataReaderView_ptr opensplice_dds_broker::GSDFPacketDataReaderView::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataReaderView_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_broker::GSDFPacketDataReaderView::_local_id))
   {
      result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_broker::GSDFPacketDataReaderView_ptr opensplice_dds_broker::GSDFPacketDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_broker::GSDFPacketDataReaderView_ptr result;
   result = dynamic_cast < opensplice_dds_broker::GSDFPacketDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



