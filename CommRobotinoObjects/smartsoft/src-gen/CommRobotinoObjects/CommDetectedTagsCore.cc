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
#include "CommRobotinoObjects/CommDetectedTagsCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommDetectedTagsACE.hh"

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

namespace CommRobotinoObjects 
{
	const char* CommDetectedTagsCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommDetectedTagsCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommRobotinoObjects::CommVisualTag(idl_CommDetectedTags.tags)
		CommRobotinoObjects::CommVisualTag::getAllHashValues(hashes);
	}
	
	void CommDetectedTagsCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommDetectedTagsCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommRobotinoObjects::CommVisualTag(idl_CommDetectedTags.tags)
		CommRobotinoObjects::CommVisualTag::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommDetectedTagsCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<CommRobotinoObjectsIDL::CommVisualTag>::const_iterator data_tagsIt;
		for(data_tagsIt=data.tags.begin(); data_tagsIt!=data.tags.end(); data_tagsIt++) {
			seed += CommRobotinoObjects::CommVisualTag::generateDataHash(*data_tagsIt);
		}
		boost::hash_combine(seed, data.valid);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommDetectedTagsCore::CommDetectedTagsCore()
	:	idl_CommDetectedTags()
	{  
		setTags(std::vector<CommRobotinoObjects::CommVisualTag>());
		setValid(false);
	}
	
	CommDetectedTagsCore::CommDetectedTagsCore(const DATATYPE &data)
	:	idl_CommDetectedTags(data)
	{  }

	CommDetectedTagsCore::~CommDetectedTagsCore()
	{  }
	
	void CommDetectedTagsCore::to_ostream(std::ostream &os) const
	{
	  os << "CommDetectedTags(";
	  std::vector<CommRobotinoObjects::CommVisualTag>::const_iterator tagsIt;
	  std::vector<CommRobotinoObjects::CommVisualTag> tagsList = getTagsCopy();
	  for(tagsIt=tagsList.begin(); tagsIt!=tagsList.end(); tagsIt++) {
	  	tagsIt->to_ostream(os);
	  }
	  os << getValid() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommDetectedTagsCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<CommRobotinoObjects::CommVisualTag>::const_iterator tagsIt;
		std::vector<CommRobotinoObjects::CommVisualTag> tagsList = getTagsCopy();
		counter = 0;
		os << indent << "<tagsList n=\"" << tagsList.size() << "\">";
		for(tagsIt=tagsList.begin(); tagsIt!=tagsList.end(); tagsIt++) {
			os << indent << "<tags i=\"" << counter++ << "\">";
			tagsIt->to_xml(os, indent);
			os << indent << "</tags>";
		}
		os << indent << "</tagsList>";
		os << indent << "<valid>" << getValid() << "</valid>";
	}
	
	// restore from xml stream
	void CommDetectedTagsCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_tagsList("<tagsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_tags("\">");
		static const Smart::KnuthMorrisPratt kmp_valid("<valid>");
		
		if(kmp_tagsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommRobotinoObjects::CommVisualTag tagsItem;
			std::vector<CommRobotinoObjects::CommVisualTag> tagsList;
			kmp_tags.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_tags.search(is)) {
					tagsItem.from_xml(is);
					tagsList.push_back(tagsItem);
				}
			}
			setTags(tagsList);
		}
		if(kmp_valid.search(is)) {
			bool validItem;
			is >> validItem;
			setValid(validItem);
		}
	}
	
	/*
	void CommDetectedTagsCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommRobotinoObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommRobotinoObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommDetectedTagsACE.hh)
		cdr << idl_CommDetectedTags;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommDetectedTags);
		cdr << data_hash;
		// std::cout << "CommDetectedTagsCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommDetectedTagsCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommRobotinoObjectsIDL::HashList hashes;
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
		// (see CommDetectedTagsACE.hh)
		cdr >> idl_CommDetectedTags;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommDetectedTags);
		assert(data_hash == own_hash);
		// std::cout << "CommDetectedTagsCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
