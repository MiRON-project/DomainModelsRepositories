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
#ifndef COMMBASICOBJECTS_ROBOTPAYLOAD_H_
#define COMMBASICOBJECTS_ROBOTPAYLOAD_H_

#include "CommBasicObjects/RobotPayloadCore.hh"

namespace CommBasicObjects {
		
class RobotPayload : public RobotPayloadCore {
	public:
		// default constructors
		RobotPayload();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// RobotPayload(const double &mass);
		
		RobotPayload(const RobotPayloadCore &robotPayload);
		RobotPayload(const DATATYPE &robotPayload);
		virtual ~RobotPayload();
		
		// use framework specific getter and setter methods from core (base) class
		using RobotPayloadCore::get;
		using RobotPayloadCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const RobotPayload &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_ROBOTPAYLOAD_H_ */
