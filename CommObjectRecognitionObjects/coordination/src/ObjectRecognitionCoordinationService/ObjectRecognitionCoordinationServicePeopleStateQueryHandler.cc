#include "ObjectRecognitionCoordinationServicePeopleStateQueryHandler.hh"
  
CommBasicObjects::CommVoid ObjectRecognitionCoordinationServicePeopleStateQueryHandler::handleRequest(const std::string& inString){

	CommBasicObjects::CommVoid request;
	return request;
}

std::string ObjectRecognitionCoordinationServicePeopleStateQueryHandler::handleAnswer(const CommObjectRecognitionObjects::CommPeople& answer){
	
	std::string outString = "(";

	size_t number_of_people = answer.getPeopleSize();
	outString += "(SIZE " + std::to_string(number_of_people) + ")(";
	
	if (answer.getIs_valid())
	{
		double x, y, z;
		CommBasicObjects::CommPose3d pose;
		for (auto& person : answer.getPeopleCopy())
		{
			int id = person.getId();
			std::string name = person.getName();
			pose = person.getPose();
			x = pose.get_x();
			y = pose.get_y();
			z = pose.get_z();
			outString += "(" + std::to_string(id) + " " + name + " " + 
				std::to_string(x) + " " + std::to_string(y) + " " + 
				std::to_string(z) + ")";
		}
	}
	else
		outString += "(0 NIL 0.0 0.0 0.0)";

	outString += "))";
	return outString;
}
