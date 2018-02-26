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

#include "CommRobotinoObjects/CommPlannerGoalList.hh"

using namespace CommRobotinoObjects;

CommPlannerGoalList::CommPlannerGoalList()
:	CommPlannerGoalListCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommPlannerGoalList::CommPlannerGoalList(const int &id, const int &flag, const std::vector<double> &goalXvector, const std::vector<double> &goalYvector, const std::vector<double> &nodeObstacleVector, const double &finalGoalX, const double &finalGoalY)
:	CommPlannerGoalListCore() // base constructor sets default values as defined in the model
{
	setId(id);
	setFlag(flag);
	setGoalXvector(goalXvector);
	setGoalYvector(goalYvector);
	setNodeObstacleVector(nodeObstacleVector);
	setFinalGoalX(finalGoalX);
	setFinalGoalY(finalGoalY);
}
 */

CommPlannerGoalList::CommPlannerGoalList(const CommPlannerGoalListCore &commPlannerGoalList)
:	CommPlannerGoalListCore(commPlannerGoalList)
{  }

CommPlannerGoalList::CommPlannerGoalList(const DATATYPE &commPlannerGoalList)
:	CommPlannerGoalListCore(commPlannerGoalList)
{  }

CommPlannerGoalList::~CommPlannerGoalList()
{  }
