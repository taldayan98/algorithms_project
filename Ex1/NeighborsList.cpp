#include "NeighborsList.h"

NeighborsList::NeighborsList(NeighborNode* head, NeighborNode* tail) {
	_head = head;
	_tail = tail;
}

/*NeighborsList::~NeighborsList() {
	delete _head;
	delete _tail;
}*/

void NeighborsList::push_back(NeighborNode* newNeighborNode) {
	if (_head == nullptr && _tail == nullptr) {
		_head = _tail = newNeighborNode;
		
	}
	else {
		_tail->setNext(newNeighborNode);
		_tail = newNeighborNode;
	}
}

NeighborNode* NeighborsList::back() {
	return _tail;
}

NeighborNode* NeighborsList::front() {
	return _head;
}

