#include "ObjectRecognitionCoordinationServicePeoplerecognitioneventEventHandler.hh"

std::string ObjectRecognitionCoordinationServicePeoplerecognitioneventEventHandler::handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) throw() {
	
	std::string outString;
	int numberOfObjects;
	std::ostringstream eventState;

	eventState << "(";

	for (int i = 0; i < numberOfObjects; i++) {
		eventState << " " << r.get_object_id(i);
	}
	eventState << ")";

	outString = eventState.str();
	return outString;
}

CommBasicObjects::CommVoid ObjectRecognitionCoordinationServicePeoplerecognitioneventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommVoid param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	return param;
}
