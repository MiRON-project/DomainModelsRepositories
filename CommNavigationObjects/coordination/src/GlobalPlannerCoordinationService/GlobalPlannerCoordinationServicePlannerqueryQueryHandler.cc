#include "GlobalPlannerCoordinationServicePlannerqueryQueryHandler.hh"
#include <sstream>
#include <iomanip>
  
CommNavigationObjects::CommPlannerGoal GlobalPlannerCoordinationServicePlannerqueryQueryHandler::handleRequest(const std::string& inString){
	auto _inString = inString.substr(1, inString.size() - 2);
	std::vector<double> result; 
	std::istringstream iss(_inString); 
	for(std::string s; iss >> s; ) 
		result.push_back(std::stod(s)); 
	CommNavigationObjects::CommPlannerGoal request;
	request.setXGoalPoint(result[0]);
	request.setYGoalPoint(result[1]);
	return request;
}

std::string GlobalPlannerCoordinationServicePlannerqueryQueryHandler::handleAnswer(const CommNavigationObjects::CommWaypoints& answer){
	auto goals = answer.getGoalsCopy();
	std::ostringstream ss;
	ss << "((";
	ss << std::fixed << std::setprecision(2);
	for (auto& goal : goals) 
		ss << goal.getXGoalPoint() << " " << goal.getYGoalPoint() << " ";
	ss << ") ";
	ss << goals.size() << ")";	
	return ss.str();
}
