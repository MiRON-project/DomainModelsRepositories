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
#ifndef COMMROBOTINOOBJECTS_COMMVISUALTAG_CORE_H_
#define COMMROBOTINOOBJECTS_COMMVISUALTAG_CORE_H_

#include "CommRobotinoObjects/CommVisualTagData.hh"
#include "CommBasicObjects/CommPose3d.hh"
#include "CommBasicObjects/CommBaseState.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommVisualTagCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommVisualTag idl_CommVisualTag;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommVisualTag DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommVisualTagCore();
	CommVisualTagCore(const DATATYPE &data);
	// default destructor
	virtual ~CommVisualTagCore();
	
	const DATATYPE& get() const { return idl_CommVisualTag; }
	operator const DATATYPE&() const { return idl_CommVisualTag; }
	DATATYPE& set() { return idl_CommVisualTag; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommVisualTag"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element TagID
	inline int getTagID() const { return idl_CommVisualTag.tagID; }
	inline CommVisualTagCore& setTagID(const int &tagID) { idl_CommVisualTag.tagID = tagID; return *this; }
	
	// getter and setter for element TagPose
	inline CommBasicObjects::CommPose3d getTagPose() const { return CommBasicObjects::CommPose3d(idl_CommVisualTag.tagPose); }
	inline CommVisualTagCore& setTagPose(const CommBasicObjects::CommPose3d &tagPose) { idl_CommVisualTag.tagPose = tagPose; return *this; }
	
	// getter and setter for element Base_state
	inline CommBasicObjects::CommBaseState getBase_state() const { return CommBasicObjects::CommBaseState(idl_CommVisualTag.base_state); }
	inline CommVisualTagCore& setBase_state(const CommBasicObjects::CommBaseState &base_state) { idl_CommVisualTag.base_state = base_state; return *this; }
	
	// getter and setter for element Sensor_pose
	inline CommBasicObjects::CommPose3d getSensor_pose() const { return CommBasicObjects::CommPose3d(idl_CommVisualTag.sensor_pose); }
	inline CommVisualTagCore& setSensor_pose(const CommBasicObjects::CommPose3d &sensor_pose) { idl_CommVisualTag.sensor_pose = sensor_pose; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMVISUALTAG_CORE_H_ */
