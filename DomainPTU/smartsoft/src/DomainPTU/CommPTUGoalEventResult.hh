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
//  Copyright (C) 2018 Servicerobotik Ulm
//
//  Service Robotics Research Center
//  University of Applied Sciences Ulm
//  Prittwitzstr. 10
//  89075 Ulm (Germany)
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


#ifndef DOMAINPTU_COMMPTUGOALEVENTRESULT_H_
#define DOMAINPTU_COMMPTUGOALEVENTRESULT_H_

#include <stdio.h>
#include <string.h>

#include "DomainPTU/CommPTUGoalEventResultCore.hh"

namespace DomainPTU {
		
class CommPTUGoalEventResult : public CommPTUGoalEventResultCore {
	public:
		// default constructors
		CommPTUGoalEventResult();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPTUGoalEventResult(const DomainPTU::PTUMoveStatus &state);
		
		CommPTUGoalEventResult(const CommPTUGoalEventResultCore &commPTUGoalEventResult);
		CommPTUGoalEventResult(const DATATYPE &commPTUGoalEventResult);
		virtual ~CommPTUGoalEventResult();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPTUGoalEventResultCore::get;
		using CommPTUGoalEventResultCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline PTUMoveStatus getState() const
		{
			return idl_CommPTUGoalEventResult.state;
		}
		inline void setState(const PTUMoveStatus &state)
		{
			idl_CommPTUGoalEventResult.state = state;
		}

		//
		// add your customized interface here
		//
		/**
		 * Set the status of the PTU action. (Success, Failure, etc.)
		 */
		inline void set_state(DomainPTU::PTUMoveStatus state) {
			idl_CommPTUGoalEventResult.state = state;
		}

		/**
		 * Get the status of the PTU action. (Success, Failure, etc.)
		 */
		inline PTUMoveStatus get_state() const {
			return idl_CommPTUGoalEventResult.state;
		}


		/**
		 * Get the status of the PTU action. (Success, Failure, etc.)
		 */
		inline void get(char* r) const
		{
			switch (idl_CommPTUGoalEventResult.state)
			{
			case PTUMoveStatus::FAILURE:
				strcpy(r, "(FAILURE)");
				break;

			case PTUMoveStatus::GOAL_NOT_REACHED:
				strcpy(r, "(GOALNOTREACHED)");
				break;

			case PTUMoveStatus::GOAL_REACHED:
				strcpy(r, "(GOALREACHED)");
				break;

			case PTUMoveStatus::HALTED:
				strcpy(r, "(HALTED)");
				break;

			case PTUMoveStatus::PAN_TILT_OUT_OF_RANGE:
			case PTUMoveStatus::TILT_OUT_OF_RANGE:
			case PTUMoveStatus::PAN_OUT_OF_RANGE:
				strcpy(r, "(OUTOFRANGE)");
				break;

			default:
				strcpy(r, "(UNKNOWN)");
				break;
			}
		}
};

inline std::ostream &operator<<(std::ostream &os, const CommPTUGoalEventResult &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace DomainPTU */
#endif /* DOMAINPTU_COMMPTUGOALEVENTRESULT_H_ */