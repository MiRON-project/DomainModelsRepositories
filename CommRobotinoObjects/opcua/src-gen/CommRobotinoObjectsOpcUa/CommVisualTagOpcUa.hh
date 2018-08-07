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
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#include "CommRobotinoObjects/CommVisualTag.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once

#include "CommBasicObjects/CommPose3dOpcUa.hh"
#include "CommBasicObjects/CommBaseStateOpcUa.hh"
#include "CommBasicObjects/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommVisualTag
template <>
ComplexType::shp_t SelfDescription(CommRobotinoObjects::CommVisualTag *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add tagID
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt32(
				"tagID",
				std::bind(&CommRobotinoObjects::CommVisualTag::getTagID, obj),
				std::bind(&CommRobotinoObjects::CommVisualTag::setTagID, obj, std::placeholders::_1)
			)
		)
	);
	ret->add(
		SelfDescription(&(obj->getTagPose()), "CommPose3d")
	);
	ret->add(
		SelfDescription(&(obj->getBase_state()), "CommBaseState")
	);
	ret->add(
		SelfDescription(&(obj->getSensor_pose()), "CommPose3d")
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet