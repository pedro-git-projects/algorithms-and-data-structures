#include "doubly_linked_list.h"
#include <iostream>

int main() {
	DoublyLinkedList dll{1};
	std::cout << dll <<  std::endl;

	dll.append(2);
	dll.append(3);
	dll.append(4);
	std::cout << dll <<  std::endl;

	dll.removeLast();
	dll.removeLast();
	std::cout << dll <<  std::endl;
}
