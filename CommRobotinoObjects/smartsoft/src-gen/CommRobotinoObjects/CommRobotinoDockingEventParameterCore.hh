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
#ifndef COMMROBOTINOOBJECTS_COMMROBOTINODOCKINGEVENTPARAMETER_CORE_H_
#define COMMROBOTINOOBJECTS_COMMROBOTINODOCKINGEVENTPARAMETER_CORE_H_

#include "CommRobotinoObjects/CommRobotinoDockingEventParameterData.hh"
#include "CommRobotinoObjects/enumRobotinoDockingEventType.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommRobotinoDockingEventParameterCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommRobotinoDockingEventParameter idl_CommRobotinoDockingEventParameter;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommRobotinoDockingEventParameter DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommRobotinoDockingEventParameterCore();
	CommRobotinoDockingEventParameterCore(const DATATYPE &data);
	// default destructor
	virtual ~CommRobotinoDockingEventParameterCore();
	
	const DATATYPE& get() const { return idl_CommRobotinoDockingEventParameter; }
	operator const DATATYPE&() const { return idl_CommRobotinoDockingEventParameter; }
	DATATYPE& set() { return idl_CommRobotinoDockingEventParameter; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommRobotinoDockingEventParameter"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element OldState
	inline CommRobotinoObjects::RobotinoDockingEventType getOldState() const { return CommRobotinoObjects::RobotinoDockingEventType(idl_CommRobotinoDockingEventParameter.oldState); }
	inline CommRobotinoDockingEventParameterCore& setOldState(const CommRobotinoObjects::RobotinoDockingEventType &oldState) { idl_CommRobotinoDockingEventParameter.oldState = oldState; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMROBOTINODOCKINGEVENTPARAMETER_CORE_H_ */
