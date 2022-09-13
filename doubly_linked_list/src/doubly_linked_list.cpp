#include <iostream>
#include <ostream>
#include <string>
#include "doubly_linked_list.h"
#include "node.h"

DoublyLinkedList::DoublyLinkedList(int value) {
	Node newNode{value};
	head = &newNode;
	tail = &newNode;
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

Node* DoublyLinkedList::get(int index) {
	if(index < 0 || index >= length)  return nullptr;
	Node* desired{head};
	if(length < index/2) {
		for(int i = 0; i < index; i++) {
			desired = desired->next;
		}
	} 
	else {
		desired = tail;
		for(int i = length - 1; i > index; i--) {
			desired = desired->prev;
		}
	}
	return desired;
}

bool DoublyLinkedList::set(int index, int value) {
	Node* desired =  DoublyLinkedList::get(index);
	if(desired) {
		desired->value = value;	
		return true;
	} 		
	return false;
}

bool DoublyLinkedList::insert(int index, int value) {
	Node* desired = DoublyLinkedList::get(index);
	if(desired == nullptr) return false;

	if(index == 0) {
		DoublyLinkedList::prepend(value);
		return true;
	}

	if(index == length) {
		DoublyLinkedList::append(value);
		return true;
	}

	Node* newNode = new Node{value};
	Node* before = get(index -1);
	Node* after = before->next;

	newNode->prev = before;
	newNode->next = after;
	before->next = newNode;
	after->prev = newNode;
	length++;
	
	return true;
}

Node* DoublyLinkedList::remove(int index) {
	Node* desired = DoublyLinkedList::get(index);
	if(desired == nullptr) return nullptr;

	if(index == 0) return removeFirst();
	if(index == length - 1) return removeLast(); 

	desired->next->prev = desired->prev; // previous arrow of the next node becomes attaches to the previous of the removed
	desired->prev->next = desired->next; // next arrow of the previous node attaches to the next of the removed 
	// breaks the ramaining links
	desired->next = nullptr;
	desired->prev = nullptr;
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
