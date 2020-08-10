#ifndef _GLOBALPLANNERCOORDINATIONSERVICEPLANNERQUERYQUERYHANDLER_HH_
#define _GLOBALPLANNERCOORDINATIONSERVICEPLANNERQUERYQUERYHANDLER_HH_

#include "CommNavigationObjects/CommPlannerGoal.hh"
#include "CommNavigationObjects/CommWaypoints.hh"
#include <string>

class GlobalPlannerCoordinationServicePlannerqueryQueryHandler
{
public:

	GlobalPlannerCoordinationServicePlannerqueryQueryHandler(){

	}

	CommNavigationObjects::CommPlannerGoal handleRequest(const std::string& inString);

	std::string handleAnswer(const CommNavigationObjects::CommWaypoints& answer);
};

#endif
