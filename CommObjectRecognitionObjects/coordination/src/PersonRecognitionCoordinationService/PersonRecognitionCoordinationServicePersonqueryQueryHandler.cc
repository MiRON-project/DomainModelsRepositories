#include "PersonRecognitionCoordinationServicePersonqueryQueryHandler.hh"

#include <iostream>
#include <string>
#include <iomanip>
  
CommObjectRecognitionObjects::CommPersonRecognitionId PersonRecognitionCoordinationServicePersonqueryQueryHandler::handleRequest(const std::string& inString){

	CommObjectRecognitionObjects::CommPersonRecognitionId request;
	if(!inString.empty() && inString.find_first_not_of("0123456789") == 
		std::string::npos)
		request.setId(std::stoi(inString));
	else
		request.setName(inString);
	
	return request;
}

std::string PersonRecognitionCoordinationServicePersonqueryQueryHandler::handleAnswer(const CommObjectRecognitionObjects::CommPerson& answer){
	
	std::ostringstream ss;
	ss << "(";
	ss << answer.getId() << " ";
	ss << answer.getName().c_str() << " ";
	auto pose = answer.getPose();
	ss << std::fixed << std::setprecision(2) << pose.get_x() << " " 
		<< pose.get_y() << " " << pose.get_z();
	ss << ")";	
	return ss.str();
}
