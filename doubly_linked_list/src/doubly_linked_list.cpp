#include <iostream>
#include <ostream>
#include <string>
#include "doubly_linked_list.h"
#include "node.h"

DoublyLinkedList::DoublyLinkedList(int value) {
	Node* newNode = new Node{value};
	head = newNode;
	tail = newNode;
	length = 1;
}

std::ostream& operator <<(std::ostream&  os, const DoublyLinkedList& dll) {
	Node* curr{ dll.head };
	std::string acc = "";
	while (curr != nullptr) {
		acc += std::to_string(curr->value);
		acc += " ";
		curr = curr->next;
	}
	os << acc;
	return os;
}

void DoublyLinkedList::append(int value) {
	Node* newNode = new Node{value};
	if(head == nullptr) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
	length++;
}

void DoublyLinkedList::prepend(int value) {
	Node* newNode = new Node{value};
	if(length == 0) {
		head = newNode;
		tail = newNode;
	} else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	length++;
}

Node* DoublyLinkedList::removeFirst() {
	if(length == 0) return nullptr;
	Node* desired{ head };
	if(length == 1) {
		head = nullptr;	
		tail = nullptr;
	} else {
		 head = head->next;
		 head->prev = nullptr;
		 desired->next = nullptr;
	}
	length--;
	return desired;
}

Node* DoublyLinkedList::removeLast() {
	if(length == 0) return nullptr;
	Node* desired{ tail };
	if(length == 1) {
		head = nullptr;
		tail = nullptr;
	} else {
		tail = desired->prev;
		tail->next = nullptr;
		desired->prev = nullptr;
	}	
	length--;
	return desired;
}

Node* DoublyLinkedList::getHead() {
	return this->head;
}

Node* DoublyLinkedList::getTail() {
	return this->tail;
}

int DoublyLinkedList::getLength() {
	return this->length;
}
