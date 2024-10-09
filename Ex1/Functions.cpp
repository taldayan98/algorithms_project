#include "Functions.h"

void Functions::printAllBridges(DirectedGraph* directed) {
	directed->DFS();

	for (unsigned int i = 0; i < directed->graph.size(); i++) {
		for (const int& element : directed->graph[i]) {
			if (directed->roots[i] != directed->roots[element]) {
				std::cout << i << " " << element << std::endl;
			}
		}
	}
}

