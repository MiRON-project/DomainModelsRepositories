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

// --------------------------------------------------------------------------
//
//  Copyright (C) 2014 Matthias Lutz
//
//        lutz@hs-ulm.de
//
//        Servicerobotics Ulm
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This file is part of the "SmartSoft Communication Classes".
//  It provides basic standardized data types for communication between
//  different components in the mobile robotics context. These classes
//  are designed to be used in conjunction with the SmartSoft Communication
//  Library.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------

#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEREQUEST_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEREQUEST_H_

#include "CommRobotinoObjects/CommPathNavigationNodeRequestCore.hh"
#include "CommRobotinoObjects/RobotPoint.hh"
#include <deque>

namespace CommRobotinoObjects {
		
class CommPathNavigationNodeRequest : public CommPathNavigationNodeRequestCore {
	public:
		// default constructors
		CommPathNavigationNodeRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathNavigationNodeRequest(const CommRobotinoObjects::NavigationNodeRequestType &requestType, const std::vector<CommRobotinoObjects::CommPathNode> &nodesList, const std::string &robotID);
		
		CommPathNavigationNodeRequest(const CommPathNavigationNodeRequestCore &commPathNavigationNodeRequest);
		CommPathNavigationNodeRequest(const DATATYPE &commPathNavigationNodeRequest);
		virtual ~CommPathNavigationNodeRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathNavigationNodeRequestCore::get;
		using CommPathNavigationNodeRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
		void setNodes(std::deque<graphNode> &p);
};

inline std::ostream &operator<<(std::ostream &os, const CommPathNavigationNodeRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONNODEREQUEST_H_ */
