#include "NotDirectedGraph.h"

NotDirectedGraph::NotDirectedGraph(int n) {
	graph.resize(n + 1);
	colors.resize(n + 1);
}

void NotDirectedGraph::insertEdge(int ver1, int ver2) {

	graph[ver1].neighborList.push_back(new NeighborNode(ver2, nullptr, nullptr));
	graph[ver2].neighborList.push_back(new NeighborNode(ver1, graph[ver1].neighborList.back(), nullptr));
	graph[ver1].neighborList.back()->setLinkedNeighbor(graph[ver2].neighborList.back());

	if (graph[ver1].getPos() == nullptr) {
		graph[ver1].setPos(graph[ver1].neighborList.front());
	}

	if (graph[ver2].getPos() == nullptr) {
		graph[ver2].setPos(graph[ver2].neighborList.front());
	}


	/*
	graph[ver1].insert(ver2, nullptr);
	graph[ver2].insert(ver1, &(graph[ver1].neighborList.back()));

	graph[ver1].neighborList.back().setLinkedNeighbor(&(graph[ver2].neighborList.back()));
	*/
}


DirectedGraph* NotDirectedGraph::DFS() {
	DirectedGraph* dirGrpah = new DirectedGraph(graph.size());
	//init
	for (unsigned int i = 1; i < graph.size(); i++) {
		colors[i] = WHITE;
	}

	//main loop
	/*for (int i = 0; i < graph.size(); i++) {
		if (colors[i] == WHITE) {
			//check if vertex pos != null -> go to visit until all edges are marked
			if (graph[i].getPos() != nullptr) {
				visit(i, dirGrpah);
			}
		}
	}*/
	visit(1, dirGrpah);
	return dirGrpah;
}

void NotDirectedGraph::visit(int u, DirectedGraph* dirGraph) {
	colors[u] = GRAY;
	Vertex verU = graph[u];
	NeighborNode* curr = verU.getPos();
	//running on all 'u' neighbors
	while (curr != nullptr) {
		//if curr color is white is the same as !curr->getMark()
		if (!curr->getMark()) {
			curr->setMark(true);
			NeighborNode* linkedNei = curr->getLinkedNeighbor();
			//going to u's neighbor -> check if pos of the linked neighbor is u (curr)
			if (graph[curr->getData()].getPos() == linkedNei) {
				NeighborNode* linkedNotMarked = linkedNei->getNext();
				//find the pos in the linked neighbor's list that's not marked
				while (linkedNotMarked != nullptr && linkedNotMarked->getMark())
					linkedNotMarked = linkedNotMarked->getNext();
				graph[curr->getData()].setPos(linkedNotMarked);
			}
			linkedNei->setMark(true);
			//adding curr to the directed graph
			dirGraph->insertEdge(u, curr->getData());
			graph[u].setPos(curr->getNext());
			visit(curr->getData(), dirGraph);
		}
		curr = curr->getNext();
	}
	colors[u] = BLACK;
}

bool NotDirectedGraph::isConnected() {
	for (unsigned int i = 1; i < colors.size(); i++) {
		if (colors[i] != BLACK)
			return false;
	}
	return true;
}
