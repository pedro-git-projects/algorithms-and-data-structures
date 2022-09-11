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

	dll.prepend(0);
	dll.prepend(-1);
	std::cout << dll <<  std::endl;

	dll.removeFirst();
	std::cout << dll <<  std::endl;

	std::cout << dll.get(2)->value << std::endl;
	dll.set(2, 3);
	std::cout << dll << std::endl;

	dll.insert(2, 99);
	std::cout << dll << std::endl;
}
