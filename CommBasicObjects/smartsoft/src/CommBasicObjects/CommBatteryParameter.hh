//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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
#ifndef COMMBASICOBJECTS_COMMBATTERYPARAMETER_H_
#define COMMBASICOBJECTS_COMMBATTERYPARAMETER_H_

#include "CommBasicObjects/CommBatteryParameterCore.hh"

namespace CommBasicObjects {
		
class CommBatteryParameter : public CommBatteryParameterCore {
	public:
		// default constructors
		CommBatteryParameter();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommBatteryParameter(const CommBasicObjects::ComparisonState &desiredState, const CommBasicObjects::ComparisonState &currentState, const double &upperThreshold = 0.0, const double &lowerThreshold = 0.0);
		
		CommBatteryParameter(const CommBatteryParameterCore &commBatteryParameter);
		CommBatteryParameter(const DATATYPE &commBatteryParameter);
		virtual ~CommBatteryParameter();
		
		// use framework specific getter and setter methods from core (base) class
		using CommBatteryParameterCore::get;
		using CommBatteryParameterCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommBatteryParameter &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMBATTERYPARAMETER_H_ */
