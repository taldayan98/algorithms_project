#include "DirectedGraph.h"

int DirectedGraph::currRoot = 0;

DirectedGraph::DirectedGraph(int n) {
	graph.resize(n);
	roots.resize(n);
	colors.resize(n);
}

void DirectedGraph::insertEdge(int ver1, int ver2) {
	graph[ver1].push_back(ver2);
}


void DirectedGraph::DFS() {
	//init
	for (int i = 1; i < graph.size(); i++) {
		colors[i] = WHITE;
	}

	//main loop
	for (int i = 1; i < graph.size(); i++) {
		if (colors[i] == WHITE) {
			currRoot = i;
			visit(i);
		}
	}
}

void DirectedGraph::visit(int u) {
	roots[u] = currRoot;
	colors[u] = GRAY;
	for (int i : graph[u]) {
		if (colors[i] == WHITE) {
			visit(i);
		}
	}

	//running on all 'u' neighbors
	/*for (int i = 1; i < graph[u].size(); i++) {
		
		if (colors[i] == WHITE) {
			visit(i);
		}
	}*/
	colors[u] = BLACK;
}
