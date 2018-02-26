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
#include "CommLocalizationObjects/ViewpointLocationACE.hh"
#include <ace/SString.h>
#include "CommLocalizationObjects/CMatrixDouble22ACE.hh"
#include "CommLocalizationObjects/CPose2DACE.hh"

// serialization operator for element ViewpointLocation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjectsIDL::ViewpointLocation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element id
	good_bit = good_bit && cdr.write_long(data.id);
	// serialize list-element mean
	good_bit = good_bit && cdr << data.mean;
	// serialize list-element cov
	good_bit = good_bit && cdr << data.cov;
	// serialize list-element invCov
	good_bit = good_bit && cdr << data.invCov;
	// serialize list-element observationCount
	good_bit = good_bit && cdr.write_long(data.observationCount);
	// serialize list-element possibleObservations
	good_bit = good_bit && cdr.write_long(data.possibleObservations);
	
	return good_bit;
}

// de-serialization operator for element ViewpointLocation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjectsIDL::ViewpointLocation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element id
	good_bit = good_bit && cdr.read_long(data.id);
	// deserialize type element mean
	good_bit = good_bit && cdr >> data.mean;
	// deserialize type element cov
	good_bit = good_bit && cdr >> data.cov;
	// deserialize type element invCov
	good_bit = good_bit && cdr >> data.invCov;
	// deserialize type element observationCount
	good_bit = good_bit && cdr.read_long(data.observationCount);
	// deserialize type element possibleObservations
	good_bit = good_bit && cdr.read_long(data.possibleObservations);
	
	return good_bit;
}

// serialization operator for CommunicationObject ViewpointLocation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjects::ViewpointLocation &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject ViewpointLocation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjects::ViewpointLocation &obj)
{
	return cdr >> obj.set();
}
