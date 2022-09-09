#include "linked_list.h"
#include <iostream>

const char* SEP = "----------------------------------";

int main() {
	LinkedList* ll = new LinkedList(4);
	ll->append(5);
	ll->append(6);
	
	ll->printList();

	ll->removeLast();
	std::cout << SEP << std::endl; 
	ll->printList();
	std::cout << SEP << std::endl; 

	ll->removeLast();
	ll->printList();
	std::cout << SEP << std::endl; 
	ll->removeLast();
	ll->printList();
}
