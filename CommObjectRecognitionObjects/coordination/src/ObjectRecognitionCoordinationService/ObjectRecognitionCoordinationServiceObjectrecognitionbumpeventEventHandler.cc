#include "ObjectRecognitionCoordinationServiceObjectrecognitionbumpeventEventHandler.hh"

std::string ObjectRecognitionCoordinationServiceObjectrecognitionbumpeventEventHandler::handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventBumpResult &r) throw() {
	std::string outString;
	
	const int envId = r.getEnvironment_id();
	std::ostringstream eventState;

	eventState << "(" << envId;
	eventState << "(";

	for (auto& id : r.getObject_idCopy())
		eventState << " " << id;
	eventState << "))";

	//convert the event result commObject to string representation outString (to TCL)
	//std::ostringstream ss;
	//ss << "("<< std::setprecision( 2 ) << answer_data<<")";
	//outString = ss.str();
	outString = eventState.str();
	return outString;
}

CommBasicObjects::CommVoid ObjectRecognitionCoordinationServiceObjectrecognitionbumpeventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommVoid param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	return param;
}
