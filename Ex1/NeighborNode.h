#ifndef _NEIGHBORNODE_H
#define _NEIGHBORNODE_H


class NeighborNode {

private:
	int _data; //vertices
	bool _mark = false;
	NeighborNode* _linkedNeighbor = nullptr;
	NeighborNode* _next = nullptr;

public:
	NeighborNode(int data, NeighborNode* linkedNeighbor, NeighborNode* next);
	//~NeighborNode();
	//getters
	bool getMark();
	NeighborNode* getLinkedNeighbor();
	int getData();
	NeighborNode* getNext();
	
	//setters
	void setLinkedNeighbor(NeighborNode* data);
	void setMark(bool mark);
	void setNext(NeighborNode* next);
};

#endif
