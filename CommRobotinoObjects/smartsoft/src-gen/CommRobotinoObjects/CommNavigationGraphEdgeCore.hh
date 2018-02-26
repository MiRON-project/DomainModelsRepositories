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
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_CORE_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_CORE_H_

#include "CommRobotinoObjects/CommNavigationGraphEdgeData.hh"
#include "CommRobotinoObjects/enumEDGE_TYPE.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommNavigationGraphEdgeCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommNavigationGraphEdge idl_CommNavigationGraphEdge;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommNavigationGraphEdge DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommNavigationGraphEdgeCore();
	CommNavigationGraphEdgeCore(const DATATYPE &data);
	// default destructor
	virtual ~CommNavigationGraphEdgeCore();
	
	const DATATYPE& get() const { return idl_CommNavigationGraphEdge; }
	operator const DATATYPE&() const { return idl_CommNavigationGraphEdge; }
	DATATYPE& set() { return idl_CommNavigationGraphEdge; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommNavigationGraphEdge"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element U
	inline int getU() const { return idl_CommNavigationGraphEdge.u; }
	inline CommNavigationGraphEdgeCore& setU(const int &u) { idl_CommNavigationGraphEdge.u = u; return *this; }
	
	// getter and setter for element V
	inline int getV() const { return idl_CommNavigationGraphEdge.v; }
	inline CommNavigationGraphEdgeCore& setV(const int &v) { idl_CommNavigationGraphEdge.v = v; return *this; }
	
	// getter and setter for element Path
	inline int getPath() const { return idl_CommNavigationGraphEdge.path; }
	inline CommNavigationGraphEdgeCore& setPath(const int &path) { idl_CommNavigationGraphEdge.path = path; return *this; }
	
	// getter and setter for element Way
	inline int getWay() const { return idl_CommNavigationGraphEdge.way; }
	inline CommNavigationGraphEdgeCore& setWay(const int &way) { idl_CommNavigationGraphEdge.way = way; return *this; }
	
	// getter and setter for element Gap
	inline double getGap() const { return idl_CommNavigationGraphEdge.gap; }
	inline CommNavigationGraphEdgeCore& setGap(const double &gap) { idl_CommNavigationGraphEdge.gap = gap; return *this; }
	
	// getter and setter for element Type
	inline CommRobotinoObjects::EDGE_TYPE getType() const { return CommRobotinoObjects::EDGE_TYPE(idl_CommNavigationGraphEdge.type); }
	inline CommNavigationGraphEdgeCore& setType(const CommRobotinoObjects::EDGE_TYPE &type) { idl_CommNavigationGraphEdge.type = type; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_CORE_H_ */
