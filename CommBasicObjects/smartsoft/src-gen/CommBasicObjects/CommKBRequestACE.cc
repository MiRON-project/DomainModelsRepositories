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
#include "CommBasicObjects/CommKBRequestACE.hh"
#include <ace/SString.h>

// serialization operator for element CommKBRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommKBRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element request
	good_bit = good_bit && cdr << ACE_CString(data.request.c_str());
	
	return good_bit;
}

// de-serialization operator for element CommKBRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommKBRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize string-type element request
	ACE_CString data_request_str;
	good_bit = good_bit && cdr >> data_request_str;
	data.request = data_request_str.c_str();
	
	return good_bit;
}

// serialization operator for CommunicationObject CommKBRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommKBRequest &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommKBRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommKBRequest &obj)
{
	return cdr >> obj.set();
}