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
#ifndef COMMBASICOBJECTS_COMMSKILLMSG_ACE_H_
#define COMMBASICOBJECTS_COMMSKILLMSG_ACE_H_

#include "CommBasicObjects/CommSkillMsg.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommSkillMsg
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommSkillMsg &data);

// de-serialization operator for DataStructure CommSkillMsg
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommSkillMsg &data);

// serialization operator for CommunicationObject CommSkillMsg
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommSkillMsg &obj);

// de-serialization operator for CommunicationObject CommSkillMsg
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommSkillMsg &obj);

#endif /* COMMBASICOBJECTS_COMMSKILLMSG_ACE_H_ */