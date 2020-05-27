#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONBUMPEVENTEVENTHANDLER_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONBUMPEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommObjectRecognitionObjects/CommObjectRecognitionEventBumpResult.hh"
#include "CommBasicObjects/CommVoid.hh"

class ObjectRecognitionCoordinationServiceObjectrecognitionbumpeventEventHandler
{
public:
	std::string handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventBumpResult &r) throw();
	CommBasicObjects::CommVoid activateEventParam(const std::string& parameterString);
};

#endif
