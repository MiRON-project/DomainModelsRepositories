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
#include "DomainHMI/CommTrafficLightACE.hh"
#include <ace/SString.h>

// serialization operator for element CommTrafficLight
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHMIIDL::CommTrafficLight &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element red
	good_bit = good_bit && cdr.write_boolean(data.red);
	// serialize list-element green
	good_bit = good_bit && cdr.write_boolean(data.green);
	// serialize list-element yellow
	good_bit = good_bit && cdr.write_boolean(data.yellow);
	
	return good_bit;
}

// de-serialization operator for element CommTrafficLight
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHMIIDL::CommTrafficLight &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element red
	good_bit = good_bit && cdr.read_boolean(data.red);
	// deserialize type element green
	good_bit = good_bit && cdr.read_boolean(data.green);
	// deserialize type element yellow
	good_bit = good_bit && cdr.read_boolean(data.yellow);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommTrafficLight
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHMI::CommTrafficLight &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommTrafficLight
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHMI::CommTrafficLight &obj)
{
	return cdr >> obj.set();
}
