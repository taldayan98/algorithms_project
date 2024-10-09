#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <vector>
#include <iostream>
#include "DirectedGraph.h"
#include "NotDirectedGraph.h"

class Functions {
public:
	static bool connectivityDFS(int n, NotDirectedGraph* notDirected, DirectedGraph* directed);
	std::vector<int> colors;

	static void printAllBridges(DirectedGraph* directed);

};


#endif