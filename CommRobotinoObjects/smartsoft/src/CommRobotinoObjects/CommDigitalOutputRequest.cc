//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

#include "CommRobotinoObjects/CommDigitalOutputRequest.hh"

using namespace CommRobotinoObjects;

CommDigitalOutputRequest::CommDigitalOutputRequest()
:	CommDigitalOutputRequestCore()
{  }


CommDigitalOutputRequest::CommDigitalOutputRequest(const unsigned int &outputNumber, const bool &outputValue){
	setValue(outputNumber,outputValue);
}

void CommDigitalOutputRequest::setValue(const unsigned int &outputNumber, const bool &outputValue){
	this->setOutputNumber(outputNumber);
	this->setOutputValue(outputValue);
}


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommDigitalOutputRequest::CommDigitalOutputRequest(const unsigned int &outputNumber, const bool &outputValue)
:	CommDigitalOutputRequestCore() // base constructor sets default values as defined in the model
{
	setOutputNumber(outputNumber);
	setOutputValue(outputValue);
}
 */

CommDigitalOutputRequest::CommDigitalOutputRequest(const CommDigitalOutputRequestCore &commDigitalOutputRequest)
:	CommDigitalOutputRequestCore(commDigitalOutputRequest)
{  }

CommDigitalOutputRequest::CommDigitalOutputRequest(const DATATYPE &commDigitalOutputRequest)
:	CommDigitalOutputRequestCore(commDigitalOutputRequest)
{  }

CommDigitalOutputRequest::~CommDigitalOutputRequest()
{  }
