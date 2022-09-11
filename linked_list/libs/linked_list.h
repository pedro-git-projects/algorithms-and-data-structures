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
		Node* removeFirst();
		Node* removeLast();
		Node* remove(int index);
		Node* getByIndex(int index);
		bool set(int index, int value);
		bool insert(int index, int value);
		int getHead();
		int getTail();
		int getLength();
};
#endif
