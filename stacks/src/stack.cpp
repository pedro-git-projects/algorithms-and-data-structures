#include "stack.h"
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

