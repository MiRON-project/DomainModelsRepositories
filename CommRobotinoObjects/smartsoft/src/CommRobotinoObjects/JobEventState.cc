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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

#include "CommRobotinoObjects/JobEventState.hh"

using namespace CommRobotinoObjects;

JobEventState::JobEventState()
:	JobEventStateCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
JobEventState::JobEventState(const std::string &robotTarget, const CommBasicObjects::CommTCLMessage &job)
:	JobEventStateCore() // base constructor sets default values as defined in the model
{
	setRobotTarget(robotTarget);
	setJob(job);
}
 */

JobEventState::JobEventState(const JobEventStateCore &jobEventState)
:	JobEventStateCore(jobEventState)
{  }

JobEventState::JobEventState(const DATATYPE &jobEventState)
:	JobEventStateCore(jobEventState)
{  }

JobEventState::~JobEventState()
{  }
