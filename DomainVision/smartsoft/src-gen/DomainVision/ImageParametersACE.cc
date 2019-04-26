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
#include "DomainVision/ImageParametersACE.hh"
#include <ace/SString.h>
#include "DomainVision/enumFormatTypeData.hh"

// serialization operator for element ImageParameters
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVisionIDL::ImageParameters &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element width
	good_bit = good_bit && cdr.write_ulong(data.width);
	// serialize list-element height
	good_bit = good_bit && cdr.write_ulong(data.height);
	// serialize list-element format
	good_bit = good_bit && cdr.write_long(data.format);
	// serialize list-element depth
	good_bit = good_bit && cdr.write_ulong(data.depth);
	// serialize list-element size
	good_bit = good_bit && cdr.write_ulong(data.size);
	
	return good_bit;
}

// de-serialization operator for element ImageParameters
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVisionIDL::ImageParameters &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element width
	good_bit = good_bit && cdr.read_ulong(data.width);
	// deserialize type element height
	good_bit = good_bit && cdr.read_ulong(data.height);
	// deserialize type element format
	good_bit = good_bit && cdr.read_long(data.format);
	// deserialize type element depth
	good_bit = good_bit && cdr.read_ulong(data.depth);
	// deserialize type element size
	good_bit = good_bit && cdr.read_ulong(data.size);
	
	return good_bit;
}

// serialization operator for CommunicationObject ImageParameters
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVision::ImageParameters &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject ImageParameters
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVision::ImageParameters &obj)
{
	return cdr >> obj.set();
}