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
#include "CommBasicObjects/CommBaseVelocityCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommBaseVelocityACE.hh"

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

namespace CommBasicObjects 
{
	const char* CommBaseVelocityCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommBaseVelocityCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommBaseVelocity.timeStamp)
		CommBasicObjects::CommTimeStamp::getAllHashValues(hashes);
	}
	
	void CommBaseVelocityCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommBaseVelocityCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommBaseVelocity.timeStamp)
		CommBasicObjects::CommTimeStamp::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommBaseVelocityCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.vX);
		boost::hash_combine(seed, data.vY);
		boost::hash_combine(seed, data.vZ);
		boost::hash_combine(seed, data.wX);
		boost::hash_combine(seed, data.wY);
		boost::hash_combine(seed, data.wZ);
		seed += CommBasicObjects::CommTimeStamp::generateDataHash(data.timeStamp);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommBaseVelocityCore::CommBaseVelocityCore()
	:	idl_CommBaseVelocity()
	{  
		setVX(0.0);
		setVY(0.0);
		setVZ(0.0);
		setWX(0.0);
		setWY(0.0);
		setWZ(0.0);
		setTimeStamp(CommBasicObjects::CommTimeStamp());
	}
	
	CommBaseVelocityCore::CommBaseVelocityCore(const DATATYPE &data)
	:	idl_CommBaseVelocity(data)
	{  }

	CommBaseVelocityCore::~CommBaseVelocityCore()
	{  }
	
	void CommBaseVelocityCore::to_ostream(std::ostream &os) const
	{
	  os << "CommBaseVelocity(";
	  os << getVX() << " ";
	  os << getVY() << " ";
	  os << getVZ() << " ";
	  os << getWX() << " ";
	  os << getWY() << " ";
	  os << getWZ() << " ";
	  getTimeStamp().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommBaseVelocityCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<vX>" << getVX() << "</vX>";
		os << indent << "<vY>" << getVY() << "</vY>";
		os << indent << "<vZ>" << getVZ() << "</vZ>";
		os << indent << "<wX>" << getWX() << "</wX>";
		os << indent << "<wY>" << getWY() << "</wY>";
		os << indent << "<wZ>" << getWZ() << "</wZ>";
		os << indent << "<timeStamp>";
		getTimeStamp().to_xml(os, indent);
		os << indent << "</timeStamp>";
	}
	
	// restore from xml stream
	void CommBaseVelocityCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_vX("<vX>");
		static const Smart::KnuthMorrisPratt kmp_vY("<vY>");
		static const Smart::KnuthMorrisPratt kmp_vZ("<vZ>");
		static const Smart::KnuthMorrisPratt kmp_wX("<wX>");
		static const Smart::KnuthMorrisPratt kmp_wY("<wY>");
		static const Smart::KnuthMorrisPratt kmp_wZ("<wZ>");
		static const Smart::KnuthMorrisPratt kmp_timeStamp("<timeStamp>");
		
		if(kmp_vX.search(is)) {
			double vXItem;
			is >> vXItem;
			setVX(vXItem);
		}
		if(kmp_vY.search(is)) {
			double vYItem;
			is >> vYItem;
			setVY(vYItem);
		}
		if(kmp_vZ.search(is)) {
			double vZItem;
			is >> vZItem;
			setVZ(vZItem);
		}
		if(kmp_wX.search(is)) {
			double wXItem;
			is >> wXItem;
			setWX(wXItem);
		}
		if(kmp_wY.search(is)) {
			double wYItem;
			is >> wYItem;
			setWY(wYItem);
		}
		if(kmp_wZ.search(is)) {
			double wZItem;
			is >> wZItem;
			setWZ(wZItem);
		}
		if(kmp_timeStamp.search(is)) {
			CommBasicObjects::CommTimeStamp timeStampItem;
			timeStampItem.from_xml(is);
			setTimeStamp(timeStampItem);
		}
	}
	
	/*
	void CommBaseVelocityCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommBaseVelocityACE.hh)
		cdr << idl_CommBaseVelocity;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommBaseVelocity);
		cdr << data_hash;
		// std::cout << "CommBaseVelocityCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommBaseVelocityCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
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
		// (see CommBaseVelocityACE.hh)
		cdr >> idl_CommBaseVelocity;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommBaseVelocity);
		assert(data_hash == own_hash);
		// std::cout << "CommBaseVelocityCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
