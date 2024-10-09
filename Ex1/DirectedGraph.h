#ifndef _DIRECTEDGRAPH_H
#define _DIRECTEDGRAPH_H

#include <vector>
#include <list>

constexpr int WHITE = 0;
constexpr int GRAY = 1;
constexpr int BLACK = 2;

class DirectedGraph {
public:
	static int currRoot;
	std::vector<std::list<int>> graph;
	std::vector<int> roots;
	std::vector<int> colors;

	DirectedGraph(int n);
	void insertEdge(int ver1, int ver2);
	void DFS();
	void visit(int u);
	
};

#endif
