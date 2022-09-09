#include <iostream>
#include "linked_list.h"
#include "node.h"

LinkedList::LinkedList(int value) {
	Node* newNode = new Node(value);
	head = newNode;
	tail = newNode;
	length = 1;
}

void LinkedList::printList() {
	Node* temp = head;
	while (temp) { // equivalent to temp != nullptr
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
}

void LinkedList::append(int value) {
	Node* newNode = new Node(value);
	if(head != nullptr) {
		tail->next = newNode;
		tail = newNode;
	} else {
		head = newNode; 
		tail = newNode;
	}
	length++;
}

int LinkedList::getHead() {
	return head->value;
}

int LinkedList::getTail() {
	return tail->value;
}

int LinkedList::getLength() {
	return length;
}
