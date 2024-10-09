#ifndef _VERTEX_H
#define _VERTEX_H

#include "NeighborsList.h"
#include "NeighborNode.h"

class Vertex {
private:
	NeighborNode* pos = nullptr; //first in the list that's not marked

public:
	NeighborsList neighborList;

	//functions

	void insert(int ver, NeighborNode* linkedNeighbor);
	NeighborNode* getPos();
	void setPos(NeighborNode* newPos);

};

#endif
