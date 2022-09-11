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
	while (temp != nullptr) { 
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

void LinkedList::prepend(int value) {
	Node* newNode = new Node(value);
	if(head != nullptr) {
		newNode->next = head;
		head = newNode;
	} else {
		head = newNode;
		tail = newNode;
	}
	length++;
}

Node* LinkedList::removeLast() {
	if(length == 0)	return nullptr;

	Node* desired = head;
	Node* temp = head;
	while(temp->next != nullptr) {
		desired = temp;
		temp = temp->next;
	}
	tail = desired;
	tail->next = nullptr;
	length--;

	if(length == 0) {
		head = nullptr;
		tail = nullptr;
	}
	return desired;
}

Node* LinkedList::removeFirst() {
	if(length == 0) return nullptr;

	Node* desired = head;	
	head = head->next;	
	desired->next = nullptr; 
	length--;

	if(length == 0)	tail = nullptr;

	return desired;
}

Node* LinkedList::getByIndex(int index) {
	if(index < 0 || index >= length) {
		return nullptr;
	} else {
		Node* desired = head;
		for(int i = 0; i != index; i++) {
			desired = desired->next;
		}
		return desired;
	}

}

bool LinkedList::set(int index, int value) {
	Node* desired = LinkedList::getByIndex(index);
	if(desired != nullptr) {
		desired->value = value;
		return true;
	} else {
		return false;
	} 
}

bool LinkedList::insert(int index, int value) {
	Node* desired = getByIndex(index);
	if(desired == nullptr) return false;
	if(index == 0) {
		LinkedList::prepend(value);
		return true;
	} else if(index == length) {
		append(value);
		return true;
	}
	Node* newNode = new Node(value);
	Node* pre = LinkedList::getByIndex(index -1);
	newNode->next = pre->next;
	pre->next = newNode;
	length++;
	return true;
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
