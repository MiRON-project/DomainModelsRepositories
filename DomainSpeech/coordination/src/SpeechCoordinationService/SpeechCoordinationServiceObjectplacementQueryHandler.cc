#include "SpeechCoordinationServiceObjectplacementQueryHandler.hh"
#include <sstream>
  
DomainSpeech::CommObjectPlacementOutputMessage SpeechCoordinationServiceObjectplacementQueryHandler::handleRequest(const std::string& inString){

	DomainSpeech::CommObjectPlacementOutputMessage request;
	
	std::vector<std::string> result;
	std::istringstream iss(inString);
	while( iss.good() )
	{
		std::string substr;
		getline( iss, substr, '_' );
		result.push_back( substr );
	}
	
	try
	{
		request.setObjectType(result[0]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return request;
	}

	try
	{
		request.setObjectMass(std::stod(result[1]));
	}
	catch(...)
	{
		request.setObjectMass(0);
	}
	
	std::vector<double> object_sizes;
	for (size_t i = 2; i < result.size(); ++i) {
		try
		{
			object_sizes.push_back(std::stod(result[i]));
		}
		catch(...)
		{
			object_sizes.push_back(0.1);
		}	
	}
	request.setObjectSize(object_sizes);

	return request;
}

std::string SpeechCoordinationServiceObjectplacementQueryHandler::handleAnswer(const CommBasicObjects::CommBool& answer){
	
	if (answer.getBoolValue())
		return "SUCCESS";
	else 
		return "ERROR";
}
