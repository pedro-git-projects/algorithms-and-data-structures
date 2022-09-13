#ifndef QUEUE_H 
#define QUEUE_H 
#include "node.h"
#include <ostream>

class Queue {
	private:
		Node* first;
		Node* last;
		int lenght;
	public:
		Queue(int value);
		friend std::ostream& operator << (std::ostream& os, const Queue& q);
		int getLength();	
		void enqueue(int value);
		Node* dequeue();
		Node* getFirst();	
		Node* getLast();	
};
#endif
