#include "Vertex.h"

void Vertex::insert(int ver, NeighborNode* linkedNeighbor = nullptr) {
	neighborList.push_back(new NeighborNode(ver, linkedNeighbor, nullptr));
}


NeighborNode* Vertex::getPos() {
	return pos;
}


void Vertex::setPos(NeighborNode* newPos) {
	pos = newPos;
}