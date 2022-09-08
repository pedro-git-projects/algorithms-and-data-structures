class Node {
	public:
		int value;
		Node* next;
		
		Node(int value, Node* next) {
			this->value = value;
			next = nullptr;
		};
};
