#include "queue.h"
#include "node.h"
#include <ostream>
#include <iostream>
#include <string>

Queue::Queue(int value) {
	Node* newNode = new Node{value};
	first = newNode;
	last = newNode;
	lenght = 1;
}

std::ostream& operator <<(std::ostream&  os, const Queue& s) {
	Node* curr{s.first};
	std::string acc{};
	while (curr) {
		acc += std::to_string(curr->value);
		acc += " ";
		curr = curr->next;
	}
	os << acc;
	return os;
}

void Queue::enqueue(int value) {
	Node* newNode = new Node{value};
	if(lenght == 0) {
		first = newNode;
		last = newNode;
	} else {
		last->next = newNode;
		last = newNode;
	}
	lenght++;
}

Node* Queue::dequeue() {
	if (lenght == 0) return nullptr;
	Node* desired{first};

	if(lenght == 1) {
		first = nullptr;
		last = nullptr;
	} else {
		first =  first->next;
		desired->next = nullptr;
	}
	lenght--;
	return desired;
}
