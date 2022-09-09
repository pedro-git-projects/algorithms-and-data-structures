#include "linked_list.h"
#include <iostream>

int main() {
	LinkedList* ll = new LinkedList(4);
	ll->append(3);
	ll->append(5);
	ll->printList();
}
