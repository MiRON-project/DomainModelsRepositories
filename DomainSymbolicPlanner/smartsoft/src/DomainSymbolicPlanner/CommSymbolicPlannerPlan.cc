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
//  Copyright (C) 2010/2011 Andreas Steck, 2014 Matthias Lutz
//
//        schlegel@hs-ulm.de
//        steck@hs-ulm.de
//
//        ZAFH Servicerobotik Ulm
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

#include "DomainSymbolicPlanner/CommSymbolicPlannerPlan.hh"
#include<cstdlib>

using namespace DomainSymbolicPlanner;

CommSymbolicPlannerPlan::CommSymbolicPlannerPlan()
:	CommSymbolicPlannerPlanCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommSymbolicPlannerPlan::CommSymbolicPlannerPlan(const std::string &plan)
:	CommSymbolicPlannerPlanCore() // base constructor sets default values as defined in the model
{
	setPlan(plan);
}
 */

CommSymbolicPlannerPlan::CommSymbolicPlannerPlan(const CommSymbolicPlannerPlanCore &commSymbolicPlannerPlan)
:	CommSymbolicPlannerPlanCore(commSymbolicPlannerPlan)
{  }

CommSymbolicPlannerPlan::CommSymbolicPlannerPlan(const DATATYPE &commSymbolicPlannerPlan)
:	CommSymbolicPlannerPlanCore(commSymbolicPlannerPlan)
{  }

CommSymbolicPlannerPlan::~CommSymbolicPlannerPlan()
{  }


int CommSymbolicPlannerPlan::set_plan(std::string name)
{
	idl_CommSymbolicPlannerPlan.plan = name.c_str();
	return 0;

}

int CommSymbolicPlannerPlan::get_plan(std::string &name) const
{
	name = idl_CommSymbolicPlannerPlan.plan.c_str();
	return 0;
}


std::string CommSymbolicPlannerPlan::getPlanStatus(){

	std::cout<<"WARNING: CODE NOT TESTED YET!"<<std::endl;
	std::string planString = getPlan();
	std::string result("error");

	std::string resultString ("(result ");
	std::size_t found;
	std::size_t endFound;

	found = planString.find(resultString);
	if(std::string::npos != found)
	{
		endFound = planString.find(")",found+resultString.length());
		result = planString.substr(found+resultString.length(),endFound-(found+resultString.length()));
	} else {
		result = "error";
	}

	return result;
}

unsigned int CommSymbolicPlannerPlan::getNumberOfOperations(){
	std::cout<<"WARNING: CODE NOT TESTED YET!"<<std::endl;

	//std::cout<<"GetPlan|"<<planString<<std::endl;
//	((result ok)(ops 3)(plan ((UNDOCK-ROBOT ROBOT-3)(PERFORM-TASK ROBOT-3 TASK-2)(PERFORM-TASK ROBOT-2 TASK-1)))(cost 0))

	std::string planString = getPlan();
	std::string result("error");
	unsigned int res = 0;

	std::string resultString ("(ops ");
	std::size_t found;
	std::size_t endFound;

	found = planString.find(resultString);
	if(std::string::npos != found)
	{
		endFound = planString.find(")",found+resultString.length());
		result = planString.substr(found+resultString.length(),endFound-(found+resultString.length()));
	} else {
		result = "error";
		res = 0;
	}

	res = atoi(result.c_str());
	return res;

}

unsigned int CommSymbolicPlannerPlan::getPlanCosts(){
	std::cout<<"WARNING: CODE NOT TESTED YET!"<<std::endl;

	std::string planString = getPlan();
	std::string result("error");
	unsigned int res = 0;

	std::string resultString ("(cost ");
	std::size_t found;
	std::size_t endFound;

	found = planString.find(resultString);
	if(std::string::npos != found)
	{
		endFound = planString.find(")",found+resultString.length());
		result = planString.substr(found+resultString.length(),endFound-(found+resultString.length()));
		res = atoi(result.c_str());
	} else {
		result = "error";
		res = 0;
	}

	return res;

}

std::list < std::string > CommSymbolicPlannerPlan::getPlanSteps(){
	std::cout<<"WARNING: CODE NOT TESTED YET!"<<std::endl;
	std::list <std::string> planList;

	std::string INPUT = getPlan();
	std::string result("error");
	//unsigned int res = 0;

	std::string planString ("(plan (");
	std::size_t found;
	std::size_t endFound;
	unsigned int numberofOps = getNumberOfOperations();

	found = INPUT.find(planString);
	if(std::string::npos != found)
	{
		found += planString.length()+1;
		for(unsigned int i =0; i<numberofOps;i++){
			std::string tmp;
			endFound = INPUT.find(")",found+planString.length());
			tmp = INPUT.substr(found,endFound-(found));
			//std::cout<<"TMP: "<<tmp<<std::endl;
			planList.push_back(tmp);
			found = endFound+2;
		}

	}
	return planList;
}

