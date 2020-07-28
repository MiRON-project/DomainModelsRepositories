#ifndef _SPEECHCOORDINATIONSERVICEOBJECTDROPQUERYHANDLER_HH_
#define _SPEECHCOORDINATIONSERVICEOBJECTDROPQUERYHANDLER_HH_

#include "DomainSpeech/CommObjectDropOutputMessage.hh"
#include "CommBasicObjects/CommBool.hh"
#include <string>

class SpeechCoordinationServiceObjectdropQueryHandler
{
public:

	SpeechCoordinationServiceObjectdropQueryHandler(){

	}

	DomainSpeech::CommObjectDropOutputMessage handleRequest(const std::string& inString);

	std::string handleAnswer(const CommBasicObjects::CommBool& answer);
};

#endif
