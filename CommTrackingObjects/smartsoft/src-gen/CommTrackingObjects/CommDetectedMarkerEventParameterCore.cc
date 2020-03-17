//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#include "CommTrackingObjects/CommDetectedMarkerEventParameterCore.hh"

// serialization/deserialization operators
//#include "CommTrackingObjects/CommDetectedMarkerEventParameterACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommTrackingObjects 
{
	const char* CommDetectedMarkerEventParameterCore::getCompiledHash()
	{
		return CommTrackingObjectsIDL::REPO_HASH;
	}
	
	void CommDetectedMarkerEventParameterCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommDetectedMarkerEventParameterCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommDetectedMarkerEventParameterCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommDetectedMarkerEventParameterCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::ULong>::const_iterator data_tag_idsIt;
		for(data_tag_idsIt=data.tag_ids.begin(); data_tag_idsIt!=data.tag_ids.end(); data_tag_idsIt++) {
			boost::hash_combine(seed, *data_tag_idsIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommDetectedMarkerEventParameterCore::CommDetectedMarkerEventParameterCore()
	:	idl_CommDetectedMarkerEventParameter()
	{  
		setTag_ids(std::vector<unsigned int>());
	}
	
	CommDetectedMarkerEventParameterCore::CommDetectedMarkerEventParameterCore(const DATATYPE &data)
	:	idl_CommDetectedMarkerEventParameter(data)
	{  }

	CommDetectedMarkerEventParameterCore::~CommDetectedMarkerEventParameterCore()
	{  }
	
	void CommDetectedMarkerEventParameterCore::to_ostream(std::ostream &os) const
	{
	  os << "CommDetectedMarkerEventParameter(";
	  std::vector<unsigned int>::const_iterator tag_idsIt;
	  std::vector<unsigned int> tag_idsList = getTag_idsCopy();
	  for(tag_idsIt=tag_idsList.begin(); tag_idsIt!=tag_idsList.end(); tag_idsIt++) {
	  	os << *tag_idsIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommDetectedMarkerEventParameterCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<unsigned int>::const_iterator tag_idsIt;
		std::vector<unsigned int> tag_idsList = getTag_idsCopy();
		counter = 0;
		os << indent << "<tag_idsList n=\"" << tag_idsList.size() << "\">";
		for(tag_idsIt=tag_idsList.begin(); tag_idsIt!=tag_idsList.end(); tag_idsIt++) {
			os << indent << "<tag_ids i=\"" << counter++ << "\">" << *tag_idsIt << "</tag_ids>";
		}
		os << indent << "</tag_idsList>";
	}
	
	// restore from xml stream
	void CommDetectedMarkerEventParameterCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_tag_idsList("<tag_idsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_tag_ids("\">");
		
		if(kmp_tag_idsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int tag_idsItem;
			std::vector<unsigned int> tag_idsList;
			kmp_tag_ids.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_tag_ids.search(is)) {
					is >> tag_idsItem;
					tag_idsList.push_back(tag_idsItem);
				}
			}
			setTag_ids(tag_idsList);
		}
	}
	
	/*
	void CommDetectedMarkerEventParameterCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommTrackingObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommTrackingObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommDetectedMarkerEventParameterACE.hh)
		cdr << idl_CommDetectedMarkerEventParameter;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommDetectedMarkerEventParameter);
		cdr << data_hash;
		// std::cout << "CommDetectedMarkerEventParameterCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommDetectedMarkerEventParameterCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommTrackingObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommDetectedMarkerEventParameterACE.hh)
		cdr >> idl_CommDetectedMarkerEventParameter;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommDetectedMarkerEventParameter);
		assert(data_hash == own_hash);
		// std::cout << "CommDetectedMarkerEventParameterCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommTrackingObjects */