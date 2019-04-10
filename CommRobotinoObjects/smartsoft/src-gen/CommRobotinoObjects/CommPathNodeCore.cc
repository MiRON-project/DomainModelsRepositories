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
#include "CommRobotinoObjects/CommPathNodeCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommPathNodeACE.hh"

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
	const char* CommPathNodeCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommPathNodeCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommPathNodeCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPathNodeCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommPathNodeCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.id);
		boost::hash_combine(seed, data.x);
		boost::hash_combine(seed, data.y);
		boost::hash_combine(seed, data.pose);
		boost::hash_combine(seed, data.path);
		boost::hash_combine(seed, data.width);
		boost::hash_combine(seed, data.type);
		boost::hash_combine(seed, data.sts);
		boost::hash_combine(seed, std::string(data.robotID.c_str()));
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPathNodeCore::CommPathNodeCore()
	:	idl_CommPathNode()
	{  
		setId(0);
		setX(0.0);
		setY(0.0);
		setPose(0);
		setPath(0);
		setWidth(0.0);
		setType(CommRobotinoObjects::NODE_TYPE());
		setSts(CommRobotinoObjects::NODE_STATUS());
		setRobotID("");
	}
	
	CommPathNodeCore::CommPathNodeCore(const DATATYPE &data)
	:	idl_CommPathNode(data)
	{  }

	CommPathNodeCore::~CommPathNodeCore()
	{  }
	
	void CommPathNodeCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPathNode(";
	  os << getId() << " ";
	  os << getX() << " ";
	  os << getY() << " ";
	  os << getPose() << " ";
	  os << getPath() << " ";
	  os << getWidth() << " ";
	  getType().to_ostream(os);
	  getSts().to_ostream(os);
	  os << getRobotID() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPathNodeCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<id>" << getId() << "</id>";
		os << indent << "<x>" << getX() << "</x>";
		os << indent << "<y>" << getY() << "</y>";
		os << indent << "<pose>" << getPose() << "</pose>";
		os << indent << "<path>" << getPath() << "</path>";
		os << indent << "<width>" << getWidth() << "</width>";
		os << indent << "<type>";
		getType().to_xml(os, indent);
		os << indent << "</type>";
		os << indent << "<sts>";
		getSts().to_xml(os, indent);
		os << indent << "</sts>";
		os << indent << "<robotID>" << getRobotID() << "</robotID>";
	}
	
	// restore from xml stream
	void CommPathNodeCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_id("<id>");
		static const Smart::KnuthMorrisPratt kmp_x("<x>");
		static const Smart::KnuthMorrisPratt kmp_y("<y>");
		static const Smart::KnuthMorrisPratt kmp_pose("<pose>");
		static const Smart::KnuthMorrisPratt kmp_path("<path>");
		static const Smart::KnuthMorrisPratt kmp_width("<width>");
		static const Smart::KnuthMorrisPratt kmp_type("<type>");
		static const Smart::KnuthMorrisPratt kmp_sts("<sts>");
		static const Smart::KnuthMorrisPratt kmp_robotID("<robotID>");
		
		if(kmp_id.search(is)) {
			unsigned int idItem;
			is >> idItem;
			setId(idItem);
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
		if(kmp_pose.search(is)) {
			unsigned int poseItem;
			is >> poseItem;
			setPose(poseItem);
		}
		if(kmp_path.search(is)) {
			unsigned int pathItem;
			is >> pathItem;
			setPath(pathItem);
		}
		if(kmp_width.search(is)) {
			double widthItem;
			is >> widthItem;
			setWidth(widthItem);
		}
		if(kmp_type.search(is)) {
			CommRobotinoObjects::NODE_TYPE typeItem;
			typeItem.from_xml(is);
			setType(typeItem);
		}
		if(kmp_sts.search(is)) {
			CommRobotinoObjects::NODE_STATUS stsItem;
			stsItem.from_xml(is);
			setSts(stsItem);
		}
		if(kmp_robotID.search(is)) {
			std::string robotIDItem;
			is >> robotIDItem;
			setRobotID(robotIDItem);
		}
	}
	
	/*
	void CommPathNodeCore::get(ACE_Message_Block *&msg) const
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
		// (see CommPathNodeACE.hh)
		cdr << idl_CommPathNode;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPathNode);
		cdr << data_hash;
		// std::cout << "CommPathNodeCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPathNodeCore::set(const ACE_Message_Block *msg)
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
		// (see CommPathNodeACE.hh)
		cdr >> idl_CommPathNode;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPathNode);
		assert(data_hash == own_hash);
		// std::cout << "CommPathNodeCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
