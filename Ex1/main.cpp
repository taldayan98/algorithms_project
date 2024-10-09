#include "NotDirectedGraph.h"
#include <iostream>
#include <string>
#include "Functions.h"
int main() {
	int n, m, ver1, ver2;
	bool isConnected;
	std::cin >> n;
	std::cin >> m;
	NotDirectedGraph notDirectedGraph(n);
	for (int i = 0; i < m; i++) {
		std::cin >> ver1 >> ver2;
		notDirectedGraph.insertEdge(ver1, ver2);
	}

	DirectedGraph* dirGraph = notDirectedGraph.DFS();
	isConnected = notDirectedGraph.isConnected();
	if (isConnected)
		Functions::printAllBridges(dirGraph);
	else
		std::cout << "not connected" << std::endl;
}