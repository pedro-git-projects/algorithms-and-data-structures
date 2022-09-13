#ifndef STACK_H 
#define STACK_H 
#include "node.h"
#include <ostream>

class Stack {
	private:
		Node* top;
		int height;
	public:
		Stack(int value);
		friend std::ostream& operator << (std::ostream& os, const Stack& dll);
		void push(int value);
		Node* pop();
		int getHeight();
		Node* getTop();

};
#endif
