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
		bool set(int index, int value);
		bool insert(int index, int value);
		Node* removeLast();
		Node* removeFirst();
		Node* get(int index);
		friend std::ostream& operator << (std::ostream& os, const DoublyLinkedList& dll);
};
#endif
