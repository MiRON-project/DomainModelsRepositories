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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEPATHANSWER_CORE_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEPATHANSWER_CORE_H_

#include "CommRobotinoObjects/CommPathNavigationNodePathAnswerData.hh"
#include "CommRobotinoObjects/CommNavigationPaths.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommPathNavigationNodePathAnswerCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommPathNavigationNodePathAnswer idl_CommPathNavigationNodePathAnswer;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommPathNavigationNodePathAnswer DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPathNavigationNodePathAnswerCore();
	CommPathNavigationNodePathAnswerCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPathNavigationNodePathAnswerCore();
	
	const DATATYPE& get() const { return idl_CommPathNavigationNodePathAnswer; }
	operator const DATATYPE&() const { return idl_CommPathNavigationNodePathAnswer; }
	DATATYPE& set() { return idl_CommPathNavigationNodePathAnswer; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommPathNavigationNodePathAnswer"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Valid
	inline bool getValid() const { return idl_CommPathNavigationNodePathAnswer.valid; }
	inline CommPathNavigationNodePathAnswerCore& setValid(const bool &valid) { idl_CommPathNavigationNodePathAnswer.valid = valid; return *this; }
	
	// getter and setter for element Paths
	inline CommRobotinoObjects::CommNavigationPaths getPaths() const { return CommRobotinoObjects::CommNavigationPaths(idl_CommPathNavigationNodePathAnswer.paths); }
	inline CommPathNavigationNodePathAnswerCore& setPaths(const CommRobotinoObjects::CommNavigationPaths &paths) { idl_CommPathNavigationNodePathAnswer.paths = paths; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEPATHANSWER_CORE_H_ */
