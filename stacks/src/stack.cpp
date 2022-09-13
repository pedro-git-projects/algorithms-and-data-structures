#include "stack.h"
#include "node.h"
#include <ostream>
#include <iostream>
#include <string>

Stack::Stack(int value) {
	Node* newNode = new Node{value};
	top = newNode;
	height = 1; 
}

std::ostream& operator <<(std::ostream&  os, const Stack& s) {
	Node* curr{s.top};
	std::string acc{};
	while (curr) {
		acc += std::to_string(curr->value);
		acc += " ";
		curr = curr->next;
	}
	os << acc;
	return os;
}

void Stack::push(int value) {
	Node* newNode = new Node{value};
	newNode->next = top;
	top = newNode;
	height++;
}

Node* Stack::pop() {
	if(height == 0) return nullptr;

	Node* desired{top};
	top = top->next;
	desired->next = nullptr;
	height--;
	return desired; 
}

int Stack::getHeight() {
	return this->height;
}

Node* Stack::getTop() {
	return this->top;
}
