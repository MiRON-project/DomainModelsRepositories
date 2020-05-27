#ifndef _PERSONRECOGNITIONCOORDINATIONSERVICEPEOPLERECOGNITIONBUMPEVENTEVENTHANDLER_HH_
#define _PERSONRECOGNITIONCOORDINATIONSERVICEPEOPLERECOGNITIONBUMPEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommObjectRecognitionObjects/CommObjectRecognitionEventBumpResult.hh"
#include "CommBasicObjects/CommVoid.hh"

class PersonRecognitionCoordinationServicePeoplerecognitionbumpeventEventHandler
{
public:
	std::string handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventBumpResult &r) throw();
	CommBasicObjects::CommVoid activateEventParam(const std::string& parameterString);
};

#endif
