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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEREQUEST_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEREQUEST_H_

#include "CommRobotinoObjects/CommPathNavigationPoseRequestCore.hh"

namespace CommRobotinoObjects {
		
class CommPathNavigationPoseRequest : public CommPathNavigationPoseRequestCore {
	public:
		// default constructors
		CommPathNavigationPoseRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathNavigationPoseRequest(const CommRobotinoObjects::NavigationNodeRequestType &requesttype, const unsigned int &pose, const std::string &robotID);
		
		CommPathNavigationPoseRequest(const CommPathNavigationPoseRequestCore &commPathNavigationPoseRequest);
		CommPathNavigationPoseRequest(const DATATYPE &commPathNavigationPoseRequest);
		virtual ~CommPathNavigationPoseRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathNavigationPoseRequestCore::get;
		using CommPathNavigationPoseRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPathNavigationPoseRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONPOSEREQUEST_H_ */
