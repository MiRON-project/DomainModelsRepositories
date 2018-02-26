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

#include "CommRobotinoObjects/CommPathNode.hh"

using namespace CommRobotinoObjects;

CommPathNode::CommPathNode()
:	CommPathNodeCore()
{  }

CommPathNode::CommPathNode(const graphNode &commPathNode){
	this->setId(commPathNode.id);
	this->setPath(commPathNode.path);
	this->setStsTGraphNode(commPathNode.sts);
	this->setTypeTGraphNode(commPathNode.type);
	this-> setX(commPathNode.x);
	this-> setY(commPathNode.y);
	this->setPose(commPathNode.pose);
	this->setRobotID(commPathNode.robotID);
}

graphNode CommPathNode::getNodeTGraphNode(){
	graphNode node;
	node.id = this->getId();
	node.path = this->getPath();
	node.sts = this->getStsTGraphNode();
	node.type = this->getTypeTGraphNode();
	node.x = this->getX();
	node.y = this->getY();
	node.pose = this->getPose();
	node.robotID = this->getRobotID();
	return node;
}

void CommPathNode::setStsTGraphNode(node_status sts){
	if (sts == AVAILABLE){
		this->setSts(CommRobotinoObjects::NODE_STATUS::AVAILABLE);
	} else if (sts == OCCUPIED){
		this->setSts(CommRobotinoObjects::NODE_STATUS::OCCUPIED);
	} else if (sts == OK){
		this->setSts(CommRobotinoObjects::NODE_STATUS::OK);
	}
}

void CommPathNode::setTypeTGraphNode(node_type type){
	if (type == CROSS){
		this->setType(CommRobotinoObjects::NODE_TYPE::CROSS);
	} else if (type == NORMAL){
		this->setType(CommRobotinoObjects::NODE_TYPE::NORMAL);
	} else if (type == WAIT){
		this->setType(CommRobotinoObjects::NODE_TYPE::WAIT);
	}
}


node_status CommPathNode::getStsTGraphNode(){
	node_status sts;
	if (this->getSts() == CommRobotinoObjects::NODE_STATUS::AVAILABLE){
		sts = AVAILABLE;
	} else if (this->getSts() == CommRobotinoObjects::NODE_STATUS::OCCUPIED){
		sts = OCCUPIED;
	} else if (this->getSts() == CommRobotinoObjects::NODE_STATUS::OK){
		sts = OK;
	}
	return sts;
}

node_type CommPathNode::getTypeTGraphNode(){
	node_type type;
	if (this->getType() == CommRobotinoObjects::NODE_TYPE::CROSS){
		type = CROSS;
	} else if (this->getType() == CommRobotinoObjects::NODE_TYPE::NORMAL){
		type = NORMAL;
	} else if (this->getType() == CommRobotinoObjects::NODE_TYPE::WAIT){
		type = WAIT;
	}
	return type;
}
/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommPathNode::CommPathNode(const unsigned int &id, const double &x, const double &y, const unsigned int &pose, const unsigned int &path, const CommRobotinoObjects::NODE_TYPE &type, const CommRobotinoObjects::NODE_STATUS &sts, const std::string &robotID)
:	CommPathNodeCore() // base constructor sets default values as defined in the model
{
	setId(id);
	setX(x);
	setY(y);
	setPose(pose);
	setPath(path);
	setType(type);
	setSts(sts);
	setRobotID(robotID);
}
 */

CommPathNode::CommPathNode(const CommPathNodeCore &commPathNode)
:	CommPathNodeCore(commPathNode)
{  }

CommPathNode::CommPathNode(const DATATYPE &commPathNode)
:	CommPathNodeCore(commPathNode)
{  }

CommPathNode::~CommPathNode()
{  }
