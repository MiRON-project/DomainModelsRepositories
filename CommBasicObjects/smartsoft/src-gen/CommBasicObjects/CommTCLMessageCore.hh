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
#ifndef COMMBASICOBJECTS_COMMTCLMESSAGE_CORE_H_
#define COMMBASICOBJECTS_COMMTCLMESSAGE_CORE_H_

#include "CommBasicObjects/CommTCLMessageData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommTCLMessageCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommTCLMessage idl_CommTCLMessage;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommTCLMessage DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommTCLMessageCore();
	CommTCLMessageCore(const DATATYPE &data);
	// default destructor
	virtual ~CommTCLMessageCore();
	
	const DATATYPE& get() const { return idl_CommTCLMessage; }
	operator const DATATYPE&() const { return idl_CommTCLMessage; }
	DATATYPE& set() { return idl_CommTCLMessage; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommTCLMessage"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Lisp
	inline std::string getLisp() const { return idl_CommTCLMessage.lisp; }
	inline CommTCLMessageCore& setLisp(const std::string &lisp) { idl_CommTCLMessage.lisp = lisp; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMTCLMESSAGE_CORE_H_ */
