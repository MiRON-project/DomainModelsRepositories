#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEPERSONQUERYQUERYHANDLER_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEPERSONQUERYQUERYHANDLER_HH_

#include "CommObjectRecognitionObjects/CommPersonRecognitionId.hh"
#include "CommObjectRecognitionObjects/CommPerson.hh"
#include <string>

class ObjectRecognitionCoordinationServicePersonqueryQueryHandler
{
public:

	ObjectRecognitionCoordinationServicePersonqueryQueryHandler(){

	}

	CommObjectRecognitionObjects::CommPersonRecognitionId handleRequest(const std::string& inString);

	std::string handleAnswer(const CommObjectRecognitionObjects::CommPerson& answer);
};

#endif
