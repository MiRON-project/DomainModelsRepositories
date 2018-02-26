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
#include "CommRobotinoObjects/DigitalOutputRequestACE.hh"
#include <ace/SString.h>

// serialization operator for element DigitalOutputRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::DigitalOutputRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element outputNumber
	good_bit = good_bit && cdr.write_ulong(data.outputNumber);
	// serialize list-element outputValue
	good_bit = good_bit && cdr.write_boolean(data.outputValue);
	
	return good_bit;
}

// de-serialization operator for element DigitalOutputRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::DigitalOutputRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element outputNumber
	good_bit = good_bit && cdr.read_ulong(data.outputNumber);
	// deserialize type element outputValue
	good_bit = good_bit && cdr.read_boolean(data.outputValue);
	
	return good_bit;
}

// serialization operator for CommunicationObject DigitalOutputRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::DigitalOutputRequest &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject DigitalOutputRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::DigitalOutputRequest &obj)
{
	return cdr >> obj.set();
}
