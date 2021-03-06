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

#include "CommRobotinoObjects/CommRemoteOperatorEvent.hh"

#include <cstring>

using namespace CommRobotinoObjects;

CommRemoteOperatorEvent::CommRemoteOperatorEvent()
:	CommRemoteOperatorEventCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommRemoteOperatorEvent::CommRemoteOperatorEvent(const CommRobotinoObjects::RemoteOperatorEventType &state)
:	CommRemoteOperatorEventCore() // base constructor sets default values as defined in the model
{
	setState(state);
}
 */

CommRemoteOperatorEvent::CommRemoteOperatorEvent(const CommRemoteOperatorEventCore &commRemoteOperatorEvent)
:	CommRemoteOperatorEventCore(commRemoteOperatorEvent)
{  }

CommRemoteOperatorEvent::CommRemoteOperatorEvent(const DATATYPE &commRemoteOperatorEvent)
:	CommRemoteOperatorEventCore(commRemoteOperatorEvent)
{  }

CommRemoteOperatorEvent::~CommRemoteOperatorEvent()
{  }


void CommRemoteOperatorEvent::get(char* r)const
{
  switch(idl_CommRemoteOperatorEvent.state) {
    case RemoteOperatorEventType::FAILED:
      strcpy(r,"(failed)");
      break;
    case RemoteOperatorEventType::SUCCESS:
      strcpy(r,"(success)");
      break;
    case RemoteOperatorEventType::INVOKE:
      strcpy(r,"(invoke)");
      break;
    default:
      strcpy(r,"(error)");
      break;
  }

}
