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
#include "CommTrackingObjects/CommLaserTrackedObjectACE.hh"
#include <ace/SString.h>

// serialization operator for element CommLaserTrackedObject
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::CommLaserTrackedObject &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element id
	good_bit = good_bit && cdr.write_ulong(data.id);
	// serialize list-element first_point
	good_bit = good_bit && cdr.write_ushort(data.first_point);
	// serialize list-element last_point
	good_bit = good_bit && cdr.write_ushort(data.last_point);
	
	return good_bit;
}

// de-serialization operator for element CommLaserTrackedObject
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::CommLaserTrackedObject &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element id
	good_bit = good_bit && cdr.read_ulong(data.id);
	// deserialize type element first_point
	good_bit = good_bit && cdr.read_ushort(data.first_point);
	// deserialize type element last_point
	good_bit = good_bit && cdr.read_ushort(data.last_point);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommLaserTrackedObject
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::CommLaserTrackedObject &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommLaserTrackedObject
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::CommLaserTrackedObject &obj)
{
	return cdr >> obj.set();
}
