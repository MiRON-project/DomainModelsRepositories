#include "PersonRecognitionCoordinationServicePeoplerecognitioneventEventHandler.hh"

std::string PersonRecognitionCoordinationServicePeoplerecognitioneventEventHandler::handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) throw() {
	
	std::string outString;
	std::ostringstream eventState;

	eventState << "(";
	for (size_t i = 0; i < r.getObject_idSize(); i++) {
		eventState << " " << r.getObject_idElemAtPos(i);
	}
	eventState << ")";

	outString = eventState.str();
	return outString;
}

CommBasicObjects::CommVoid PersonRecognitionCoordinationServicePeoplerecognitioneventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommVoid param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	return param;
}
