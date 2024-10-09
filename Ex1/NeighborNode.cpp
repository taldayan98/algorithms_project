#include "NeighborNode.h"

NeighborNode::NeighborNode(int data, NeighborNode* linkedNeighbor, NeighborNode* next) {
	_data = data;
	_linkedNeighbor = linkedNeighbor;
	_next = next;
}

/*NeighborNode::~NeighborNode() {
	delete _next;
}*/

//getters
bool NeighborNode::getMark() {
	return _mark;
}

NeighborNode* NeighborNode::getLinkedNeighbor() {
	return _linkedNeighbor;
}
int NeighborNode::getData() {
	return _data;
}

NeighborNode* NeighborNode::getNext() {
	return _next;
}

//setters
void NeighborNode::setLinkedNeighbor(NeighborNode* linkedNeighbor) {
	_linkedNeighbor = linkedNeighbor;
}

void NeighborNode::setMark(bool mark) {
	_mark = mark;
}

void NeighborNode::setNext(NeighborNode* next) {
	_next = next;
}

