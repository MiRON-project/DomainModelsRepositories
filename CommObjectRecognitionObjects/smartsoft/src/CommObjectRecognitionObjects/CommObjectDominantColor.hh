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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTDOMINANTCOLOR_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTDOMINANTCOLOR_H_

#include "CommObjectRecognitionObjects/CommObjectDominantColorCore.hh"

namespace CommObjectRecognitionObjects {
		
class CommObjectDominantColor : public CommObjectDominantColorCore {
	public:
		// default constructors
		CommObjectDominantColor();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommObjectDominantColor(const double &r, const double &g, const double &b, const double &dominance);
		
		CommObjectDominantColor(const CommObjectDominantColorCore &commObjectDominantColor);
		CommObjectDominantColor(const DATATYPE &commObjectDominantColor);
		virtual ~CommObjectDominantColor();
		
		// use framework specific getter and setter methods from core (base) class
		using CommObjectDominantColorCore::get;
		using CommObjectDominantColorCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommObjectDominantColor &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTDOMINANTCOLOR_H_ */
