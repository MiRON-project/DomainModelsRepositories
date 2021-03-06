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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

// --------------------------------------------------------------------------
//
//  Copyright (C) 2014 Matthias Lutz
//
//        schlegel@hs-ulm.de
//
//        ZAFH Servicerobotik Ulm
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
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


#include "CommBasicObjects/CommIRScan.hh"

using namespace CommBasicObjects;

CommIRScan::CommIRScan()
:	CommIRScanCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommIRScan::CommIRScan(const std::vector<CommBasicObjects::CommPose3d> &poses3D, const std::vector<double> &distances, const CommBasicObjects::CommTimeStamp &timeStamp, const std::vector<double> &raw_readings, const double &distance_min, const double &distance_max)
:	CommIRScanCore() // base constructor sets default values as defined in the model
{
	setDistance_min(distance_min);
	setDistance_max(distance_max);
	setPoses3D(poses3D);
	setDistances(distances);
	setTimeStamp(timeStamp);
	setRaw_readings(raw_readings);
}
 */





/**
Return the distance of scan point \a i in units of \a unit meters.
*/
double CommIRScan::get_scan_distance(unsigned int i, const double unit) const
{
	return getDistancesElemAtPos(i) / unit;
}


/**
	Get cartesian information about scan point number \a i in the coordinate system of the scanner.
	The information is returned in reference arguments \a x and \a y in units
	of \a unit meters (default is 0.001 meters).
 */

void CommIRScan::get_scan_cartesian_point_scanner(unsigned int i, double &x, double &y, const double unit) const
{
	const double d = get_scan_distance(i, unit);
	x = d;
	y = 0;
}

/**
	Get cartesian information about scan point number \a i in the coordinate system of the robot.
	The information is returned in reference arguments \a x, \a y and \a z in units
	of \a unit meters (default is 0.001 meters).
 */

void CommIRScan::get_scan_cartesian_3dpoint_robot(unsigned int i, double &x, double &y, double &z, const double unit) const
{
	double sx,sy,sz = 0;
	get_scan_cartesian_point_scanner(i,sx,sy,unit);

	CommPose3d pose = getPoses3DElemAtPos(i);

	double a = pose.get_azimuth();
	double e = pose.get_elevation();
	double r = pose.get_roll();

	// rotate
	x = sx*cos(e)*cos(a) + sy*(-cos(r)*sin(a)+sin(r)*sin(e)*cos(a)) + sz*(sin(r)*sin(a)+cos(r)*sin(e)*cos(a));
	y = sx*cos(e)*sin(a) + sy*(cos(r)*cos(a)+sin(r)*sin(e)*sin(a)) + sz*(-sin(r)*cos(a)+cos(r)*sin(e)*sin(a));
	z = sx*-sin(e) + sy*sin(r)*cos(e) + sz*cos(r)*cos(e);

	// translate
	x += pose.get_x(1) / unit;
	y += pose.get_y(1) / unit;
	z += pose.get_z(1) / unit;
}

unsigned int CommIRScan::get_scan_size(){
	return getDistancesSize();
}

CommIRScan::CommIRScan(const CommIRScanCore &commIRScan)
:	CommIRScanCore(commIRScan)
{  }

CommIRScan::CommIRScan(const DATATYPE &commIRScan)
:	CommIRScanCore(commIRScan)
{  }

CommIRScan::~CommIRScan()
{  }
