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

#include "CommBasicObjects/CommBaseState.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once

#include "CommBasicObjects/CommTimeStampOpcUa.hh"
#include "CommBasicObjects/CommBasePoseOpcUa.hh"
#include "CommBasicObjects/CommBasePoseOpcUa.hh"
#include "CommBasicObjects/CommBaseVelocityOpcUa.hh"
#include "CommBasicObjects/CommBaseVelocityOpcUa.hh"
#include "CommBasicObjects/CommBatteryLevelOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommBaseState
template <>
ComplexType::shp_t SelfDescription(CommBasicObjects::CommBaseState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	ret->add(
		SelfDescription(&(obj->getTimeStamp()), "CommTimeStamp")
	);
	ret->add(
		SelfDescription(&(obj->getBasePose()), "CommBasePose")
	);
	ret->add(
		SelfDescription(&(obj->getBaseOdomPose()), "CommBasePose")
	);
	ret->add(
		SelfDescription(&(obj->getBaseVelocity()), "CommBaseVelocity")
	);
	ret->add(
		SelfDescription(&(obj->getBaseOdomVelocity()), "CommBaseVelocity")
	);
	ret->add(
		SelfDescription(&(obj->getBatteryState()), "CommBatteryLevel")
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet