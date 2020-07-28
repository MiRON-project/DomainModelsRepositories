#include "SpeechCoordinationServiceObjectdropQueryHandler.hh"
  
DomainSpeech::CommObjectDropOutputMessage 
		SpeechCoordinationServiceObjectdropQueryHandler::handleRequest(
		const std::string& inString){
	
	DomainSpeech::CommObjectDropOutputMessage request;
	int index = 0;
	try{
		index = std::stoi(inString);
		request.setObj_carried_index(index);
	}
	catch(...)
	{
		request.setObj_carried_index(-2);
	}
	return request;
}

std::string SpeechCoordinationServiceObjectdropQueryHandler::handleAnswer(
		const CommBasicObjects::CommBool& answer){	
	if (answer.getBoolValue())
		return "SUCCESS";
	else
		return "ERROR";
}
