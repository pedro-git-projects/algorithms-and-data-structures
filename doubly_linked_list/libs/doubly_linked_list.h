#ifndef DOUBLY_LINKED_LIST_H 
#define DOUBLY_LINKED_LIST_H 
#include "node.h"
#include <ostream>

class DoublyLinkedList {
	private:
		Node* head;
		Node* tail;
		int length;
	public:
		DoublyLinkedList(int value);
		Node* getHead();
		Node* getTail();
		int getLength();
		void append(int value);
		void prepend(int value);
		Node* removeLast();
		friend std::ostream& operator << (std::ostream& os, const DoublyLinkedList& dll);
};
#endif
