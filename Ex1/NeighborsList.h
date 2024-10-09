#ifndef _NEIGHBORSLIST_H
#define _NEIGHBORSLIST_H

#include "NeighborNode.h"

class NeighborsList {
private:
	NeighborNode* _head = nullptr;
	NeighborNode* _tail = nullptr;

public:
	NeighborsList() {}
	NeighborsList(NeighborNode* head, NeighborNode* tail);
	//~NeighborsList();
	void push_back(NeighborNode* newNeighborNode);
	NeighborNode* back();
	NeighborNode* front();
};


#endif
