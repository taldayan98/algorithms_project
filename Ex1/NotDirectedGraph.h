#ifndef _NOTDIRECTEDGRAPH_H
#define _NOTDIRECTEDGRAPH_H

#include <vector>
#include "Vertex.h"
#include "DirectedGraph.h"
#include "NeighborsList.h"

class NotDirectedGraph
{
public:
	std::vector<Vertex> graph;

	static int currRoot;
	std::vector<int> colors;


	NotDirectedGraph(int n);
	//~NotDirectedGraph();

	
	void insertEdge(int ver1, int ver2);
	DirectedGraph* DFS();
	void visit(int u, DirectedGraph* dirGraph);
	bool isConnected();
};


#endif
