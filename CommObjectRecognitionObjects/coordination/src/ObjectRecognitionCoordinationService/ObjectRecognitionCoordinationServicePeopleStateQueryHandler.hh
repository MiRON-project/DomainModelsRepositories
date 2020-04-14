#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEPEOPLESTATEQUERYHANDLER_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEPEOPLESTATEQUERYHANDLER_HH_

#include "CommBasicObjects/CommVoid.hh"
#include "CommObjectRecognitionObjects/CommPeople.hh"
#include <string>

class ObjectRecognitionCoordinationServicePeopleStateQueryHandler
{
public:

	ObjectRecognitionCoordinationServicePeopleStateQueryHandler(){

	}

	CommBasicObjects::CommVoid handleRequest(const std::string& inString);

	std::string handleAnswer(const CommObjectRecognitionObjects::CommPeople& answer);
};

#endif
