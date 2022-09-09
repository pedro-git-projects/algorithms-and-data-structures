#ifndef LINKED_LIST_H 
#define LINKED_LIST_H 
#include "node.h"

class LinkedList {
	private:
		Node* head;
		Node* tail;
		int length;
	public:
		LinkedList(int value);
};
#endif
