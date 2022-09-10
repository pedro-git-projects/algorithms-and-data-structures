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
		void printList();
		void append(int value);
		void prepend(int value);
		Node* removeLast();
		int getHead();
		int getTail();
		int getLength();
};
#endif
