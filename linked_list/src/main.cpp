#include "linked_list.h"
#include <iostream>

const char* SEP = "----------------------------------";

int main() {
	LinkedList* ll = new LinkedList(4);
	ll->append(5);
	ll->append(6);
	
	ll->removeLast();
	ll->append(7);

	ll->prepend(1);
	ll->printList();

	ll->removeFirst();
	std::cout << SEP << std::endl;
	ll->printList();
	std::cout << SEP << std::endl;
	std::cout << ll->getByIndex(1)->value << std::endl;
}
