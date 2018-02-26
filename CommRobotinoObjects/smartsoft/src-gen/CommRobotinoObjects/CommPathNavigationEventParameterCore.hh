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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTPARAMETER_CORE_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTPARAMETER_CORE_H_

#include "CommRobotinoObjects/CommPathNavigationEventParameterData.hh"
#include "CommRobotinoObjects/enumPathNavigationEventType.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommPathNavigationEventParameterCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommPathNavigationEventParameter idl_CommPathNavigationEventParameter;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommPathNavigationEventParameter DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPathNavigationEventParameterCore();
	CommPathNavigationEventParameterCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPathNavigationEventParameterCore();
	
	const DATATYPE& get() const { return idl_CommPathNavigationEventParameter; }
	operator const DATATYPE&() const { return idl_CommPathNavigationEventParameter; }
	DATATYPE& set() { return idl_CommPathNavigationEventParameter; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommPathNavigationEventParameter"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element OldState
	inline CommRobotinoObjects::PathNavigationEventType getOldState() const { return CommRobotinoObjects::PathNavigationEventType(idl_CommPathNavigationEventParameter.oldState); }
	inline CommPathNavigationEventParameterCore& setOldState(const CommRobotinoObjects::PathNavigationEventType &oldState) { idl_CommPathNavigationEventParameter.oldState = oldState; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTPARAMETER_CORE_H_ */
