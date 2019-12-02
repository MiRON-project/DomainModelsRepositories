#include "SimpleObjectEventStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommObjectRecognitionObjectsIDL::SimpleObjectEventState
template <>
IDescription::shp_t SelfDescription(CommObjectRecognitionObjectsIDL::SimpleObjectEventState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add newState
	ret->add(
		SelfDescription(&(obj->newState), "NewState")
	);
	// add x
	ret->add(
		SelfDescription(&(obj->x), "X")
	);
	// add y
	ret->add(
		SelfDescription(&(obj->y), "Y")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
