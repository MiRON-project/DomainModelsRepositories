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
#ifndef COMMROBOTINOOBJECTS_PATHNAVIGATIONEVENTSTATE_DATA_H_
#define COMMROBOTINOOBJECTS_PATHNAVIGATIONEVENTSTATE_DATA_H_

#include "CommRobotinoObjects/enumPathNavigationEventTypeData.hh"
#include "CommBasicObjects/CommPosition3dData.hh"


namespace CommRobotinoObjectsIDL 
{
	struct PathNavigationEventState
	{
		CommRobotinoObjectsIDL::PathNavigationEventType newState;
		CommBasicObjectsIDL::CommPosition3d nextGoal;
  	};
};

#endif /* COMMROBOTINOOBJECTS_PATHNAVIGATIONEVENTSTATE_DATA_H_ */
