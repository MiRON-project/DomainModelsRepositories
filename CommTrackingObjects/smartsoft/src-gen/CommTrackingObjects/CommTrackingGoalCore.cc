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
#include "CommTrackingObjects/CommTrackingGoalCore.hh"

// serialization/deserialization operators
//#include "CommTrackingObjects/CommTrackingGoalACE.hh"

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
	const char* CommTrackingGoalCore::getCompiledHash()
	{
		return CommTrackingObjectsIDL::REPO_HASH;
	}
	
	void CommTrackingGoalCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommTrackingGoalCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommTrackingGoalCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommTrackingGoalCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.trackingType);
		boost::hash_combine(seed, data.angle);
		boost::hash_combine(seed, data.distance);
		boost::hash_combine(seed, data.x);
		boost::hash_combine(seed, data.y);
		boost::hash_combine(seed, data.isValid);
		std::vector<ACE_CDR::Double>::const_iterator data_covIt;
		for(data_covIt=data.cov.begin(); data_covIt!=data.cov.end(); data_covIt++) {
			boost::hash_combine(seed, *data_covIt);
		}
		boost::hash_combine(seed, data.goalCount);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommTrackingGoalCore::CommTrackingGoalCore()
	:	idl_CommTrackingGoal()
	{  
		setTrackingType(CommTrackingObjects::TrackingGoalType());
		setAngle(0.0);
		setDistance(0.0);
		setX(0.0);
		setY(0.0);
		setIsValid(false);
		setCov(std::vector<double>());
		setGoalCount(0);
	}
	
	CommTrackingGoalCore::CommTrackingGoalCore(const DATATYPE &data)
	:	idl_CommTrackingGoal(data)
	{  }

	CommTrackingGoalCore::~CommTrackingGoalCore()
	{  }
	
	void CommTrackingGoalCore::to_ostream(std::ostream &os) const
	{
	  os << "CommTrackingGoal(";
	  getTrackingType().to_ostream(os);
	  os << getAngle() << " ";
	  os << getDistance() << " ";
	  os << getX() << " ";
	  os << getY() << " ";
	  os << getIsValid() << " ";
	  std::vector<double>::const_iterator covIt;
	  std::vector<double> covList = getCovCopy();
	  for(covIt=covList.begin(); covIt!=covList.end(); covIt++) {
	  	os << *covIt << " ";
	  }
	  os << getGoalCount() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommTrackingGoalCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<trackingType>";
		getTrackingType().to_xml(os, indent);
		os << indent << "</trackingType>";
		os << indent << "<angle>" << getAngle() << "</angle>";
		os << indent << "<distance>" << getDistance() << "</distance>";
		os << indent << "<x>" << getX() << "</x>";
		os << indent << "<y>" << getY() << "</y>";
		os << indent << "<isValid>" << getIsValid() << "</isValid>";
		std::vector<double>::const_iterator covIt;
		std::vector<double> covList = getCovCopy();
		counter = 0;
		os << indent << "<covList n=\"" << covList.size() << "\">";
		for(covIt=covList.begin(); covIt!=covList.end(); covIt++) {
			os << indent << "<cov i=\"" << counter++ << "\">" << *covIt << "</cov>";
		}
		os << indent << "</covList>";
		os << indent << "<goalCount>" << getGoalCount() << "</goalCount>";
	}
	
	// restore from xml stream
	void CommTrackingGoalCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_trackingType("<trackingType>");
		static const Smart::KnuthMorrisPratt kmp_angle("<angle>");
		static const Smart::KnuthMorrisPratt kmp_distance("<distance>");
		static const Smart::KnuthMorrisPratt kmp_x("<x>");
		static const Smart::KnuthMorrisPratt kmp_y("<y>");
		static const Smart::KnuthMorrisPratt kmp_isValid("<isValid>");
		static const Smart::KnuthMorrisPratt kmp_covList("<covList n=\"");
		static const Smart::KnuthMorrisPratt kmp_cov("\">");
		static const Smart::KnuthMorrisPratt kmp_goalCount("<goalCount>");
		
		if(kmp_trackingType.search(is)) {
			CommTrackingObjects::TrackingGoalType trackingTypeItem;
			trackingTypeItem.from_xml(is);
			setTrackingType(trackingTypeItem);
		}
		if(kmp_angle.search(is)) {
			double angleItem;
			is >> angleItem;
			setAngle(angleItem);
		}
		if(kmp_distance.search(is)) {
			double distanceItem;
			is >> distanceItem;
			setDistance(distanceItem);
		}
		if(kmp_x.search(is)) {
			double xItem;
			is >> xItem;
			setX(xItem);
		}
		if(kmp_y.search(is)) {
			double yItem;
			is >> yItem;
			setY(yItem);
		}
		if(kmp_isValid.search(is)) {
			bool isValidItem;
			is >> isValidItem;
			setIsValid(isValidItem);
		}
		if(kmp_covList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double covItem;
			std::vector<double> covList;
			kmp_cov.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_cov.search(is)) {
					is >> covItem;
					covList.push_back(covItem);
				}
			}
			setCov(covList);
		}
		if(kmp_goalCount.search(is)) {
			unsigned long int goalCountItem;
			is >> goalCountItem;
			setGoalCount(goalCountItem);
		}
	}
	
	/*
	void CommTrackingGoalCore::get(ACE_Message_Block *&msg) const
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
		// (see CommTrackingGoalACE.hh)
		cdr << idl_CommTrackingGoal;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommTrackingGoal);
		cdr << data_hash;
		// std::cout << "CommTrackingGoalCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommTrackingGoalCore::set(const ACE_Message_Block *msg)
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
		// (see CommTrackingGoalACE.hh)
		cdr >> idl_CommTrackingGoal;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommTrackingGoal);
		assert(data_hash == own_hash);
		// std::cout << "CommTrackingGoalCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommTrackingObjects */
