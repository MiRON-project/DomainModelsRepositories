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
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPH_DATA_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPH_DATA_H_

#include "CommRobotinoObjects/CommNavigationGraphEdgeData.hh"
#include "CommRobotinoObjects/CommNavigationGraphVertexData.hh"

#include <vector>

namespace CommRobotinoObjectsIDL 
{
	typedef std::vector<CommRobotinoObjectsIDL::CommNavigationGraphVertex> CommNavigationGraph_vertices_type;
	typedef std::vector<CommRobotinoObjectsIDL::CommNavigationGraphEdge> CommNavigationGraph_edges_type;
	typedef std::vector<double> CommNavigationGraph_pathWidth_type;
	struct CommNavigationGraph
	{
		CommNavigationGraph_vertices_type vertices;
		CommNavigationGraph_edges_type edges;
		CommNavigationGraph_pathWidth_type pathWidth;
		bool valid;
  	};
};

#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPH_DATA_H_ */
