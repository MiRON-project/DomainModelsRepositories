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
#include "CommLocalizationObjects/CPose2DACE.hh"
#include <ace/SString.h>

// serialization operator for element CPose2D
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjectsIDL::CPose2D &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element m_phi
	good_bit = good_bit && cdr.write_double(data.m_phi);
	// serialize list-element m_is3D
	good_bit = good_bit && cdr.write_boolean(data.m_is3D);
	// serialize list-element m_x
	good_bit = good_bit && cdr.write_double(data.m_x);
	// serialize list-element m_y
	good_bit = good_bit && cdr.write_double(data.m_y);
	// serialize list-element m_z
	good_bit = good_bit && cdr.write_double(data.m_z);
	
	return good_bit;
}

// de-serialization operator for element CPose2D
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjectsIDL::CPose2D &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element m_phi
	good_bit = good_bit && cdr.read_double(data.m_phi);
	// deserialize type element m_is3D
	good_bit = good_bit && cdr.read_boolean(data.m_is3D);
	// deserialize type element m_x
	good_bit = good_bit && cdr.read_double(data.m_x);
	// deserialize type element m_y
	good_bit = good_bit && cdr.read_double(data.m_y);
	// deserialize type element m_z
	good_bit = good_bit && cdr.read_double(data.m_z);
	
	return good_bit;
}

// serialization operator for CommunicationObject CPose2D
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjects::CPose2D &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CPose2D
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjects::CPose2D &obj)
{
	return cdr >> obj.set();
}
