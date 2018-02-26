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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEANSWER_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEANSWER_H_

#include "CommRobotinoObjects/CommPathNavigationPoseAnswerCore.hh"

namespace CommRobotinoObjects {
		
class CommPathNavigationPoseAnswer : public CommPathNavigationPoseAnswerCore {
	public:
		// default constructors
		CommPathNavigationPoseAnswer();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathNavigationPoseAnswer(const CommRobotinoObjects::NodeRequestAnserType &result);
		
		CommPathNavigationPoseAnswer(const CommPathNavigationPoseAnswerCore &commPathNavigationPoseAnswer);
		CommPathNavigationPoseAnswer(const DATATYPE &commPathNavigationPoseAnswer);
		virtual ~CommPathNavigationPoseAnswer();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathNavigationPoseAnswerCore::get;
		using CommPathNavigationPoseAnswerCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPathNavigationPoseAnswer &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEANSWER_H_ */
