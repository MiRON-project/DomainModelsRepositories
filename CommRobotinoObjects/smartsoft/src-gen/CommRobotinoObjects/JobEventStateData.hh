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
#ifndef COMMROBOTINOOBJECTS_JOBEVENTSTATE_DATA_H_
#define COMMROBOTINOOBJECTS_JOBEVENTSTATE_DATA_H_

#include "CommBasicObjects/CommTCLMessageData.hh"

#include <string>

namespace CommRobotinoObjectsIDL 
{
	struct JobEventState
	{
		std::string robotTarget;
		CommBasicObjectsIDL::CommTCLMessage job;
  	};
};

#endif /* COMMROBOTINOOBJECTS_JOBEVENTSTATE_DATA_H_ */
