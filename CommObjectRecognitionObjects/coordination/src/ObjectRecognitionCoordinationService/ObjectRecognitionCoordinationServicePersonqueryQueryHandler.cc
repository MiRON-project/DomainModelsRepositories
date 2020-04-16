#include "ObjectRecognitionCoordinationServicePersonqueryQueryHandler.hh"
  
CommObjectRecognitionObjects::CommPersonRecognitionId ObjectRecognitionCoordinationServicePersonqueryQueryHandler::handleRequest(const std::string& inString){

	CommObjectRecognitionObjects::CommPersonRecognitionId request;
	if(!inString.empty() && inString.find_first_not_of("0123456789") == 
		std::string::npos)
		request.setId(std::stoi(inString));
	else
		request.setName(inString);
	return request;
}

std::string ObjectRecognitionCoordinationServicePersonqueryQueryHandler::handleAnswer(const CommObjectRecognitionObjects::CommPerson& answer){
	
	std::ostringstream ss;
	ss << "(";
	ss << answer.getId();
	ss << answer.getName();
	auto pose = answer.getPose();
	ss << pose.get_x() << pose.get_y() << pose.get_z();
	ss << ")";	
	return ss.str();
}
