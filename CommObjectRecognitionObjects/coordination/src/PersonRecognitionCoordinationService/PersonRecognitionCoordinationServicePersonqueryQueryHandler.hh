#ifndef _PERSONRECOGNITIONCOORDINATIONSERVICEPERSONQUERYQUERYHANDLER_HH_
#define _PERSONRECOGNITIONCOORDINATIONSERVICEPERSONQUERYQUERYHANDLER_HH_

#include "CommObjectRecognitionObjects/CommPersonRecognitionId.hh"
#include "CommObjectRecognitionObjects/CommPerson.hh"
#include <string>

class PersonRecognitionCoordinationServicePersonqueryQueryHandler
{
public:

	PersonRecognitionCoordinationServicePersonqueryQueryHandler(){

	}

	CommObjectRecognitionObjects::CommPersonRecognitionId handleRequest(const std::string& inString);

	std::string handleAnswer(const CommObjectRecognitionObjects::CommPerson& answer);
};

#endif
