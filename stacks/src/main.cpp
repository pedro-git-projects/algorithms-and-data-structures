#include "stack.h"
#include <iostream>

int main() {
	Stack s{2};
	std::cout << s << std::endl;
	s.push(1);
	std::cout << s << std::endl;
	s.pop();
	std::cout << s << std::endl;
}
