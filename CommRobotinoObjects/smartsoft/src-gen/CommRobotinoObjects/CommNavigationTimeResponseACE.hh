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
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONTIMERESPONSE_ACE_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONTIMERESPONSE_ACE_H_

#include "CommRobotinoObjects/CommNavigationTimeResponse.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommNavigationTimeResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommNavigationTimeResponse &data);

// de-serialization operator for DataStructure CommNavigationTimeResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommNavigationTimeResponse &data);

// serialization operator for CommunicationObject CommNavigationTimeResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommNavigationTimeResponse &obj);

// de-serialization operator for CommunicationObject CommNavigationTimeResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommNavigationTimeResponse &obj);

#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONTIMERESPONSE_ACE_H_ */
