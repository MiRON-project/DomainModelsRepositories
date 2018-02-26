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
#include "CommRobotinoObjects/CommDigitalInputEventStateACE.hh"
#include <ace/SString.h>

// serialization operator for element CommDigitalInputEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommDigitalInputEventState &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element digitalInputValues
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.digitalInputValues.size());
	std::vector<ACE_CDR::Boolean>::const_iterator data_digitalInputValuesIt;
	for(data_digitalInputValuesIt=data.digitalInputValues.begin(); data_digitalInputValuesIt!=data.digitalInputValues.end(); data_digitalInputValuesIt++) {
		good_bit = good_bit && cdr.write_boolean(*data_digitalInputValuesIt);
	}
	
	return good_bit;
}

// de-serialization operator for element CommDigitalInputEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommDigitalInputEventState &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize list-type element digitalInputValues
	ACE_CDR::ULong data_digitalInputValuesNbr;
	good_bit = good_bit && cdr >> data_digitalInputValuesNbr;
	data.digitalInputValues.clear();
	ACE_CDR::Boolean data_digitalInputValuesItem;
	for(ACE_CDR::ULong i=0; i<data_digitalInputValuesNbr; ++i) {
		good_bit = good_bit && cdr.read_boolean(data_digitalInputValuesItem);
		data.digitalInputValues.push_back(data_digitalInputValuesItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject CommDigitalInputEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommDigitalInputEventState &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommDigitalInputEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommDigitalInputEventState &obj)
{
	return cdr >> obj.set();
}
