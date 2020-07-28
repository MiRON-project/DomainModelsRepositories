#ifndef _SPEECHCOORDINATIONSERVICEOBJECTPLACEMENTQUERYHANDLER_HH_
#define _SPEECHCOORDINATIONSERVICEOBJECTPLACEMENTQUERYHANDLER_HH_

#include "DomainSpeech/CommObjectPlacementOutputMessage.hh"
#include "CommBasicObjects/CommBool.hh"
#include <string>

class SpeechCoordinationServiceObjectplacementQueryHandler
{
public:

	SpeechCoordinationServiceObjectplacementQueryHandler(){

	}

	DomainSpeech::CommObjectPlacementOutputMessage handleRequest(const std::string& inString);

	std::string handleAnswer(const CommBasicObjects::CommBool& answer);
};

#endif
