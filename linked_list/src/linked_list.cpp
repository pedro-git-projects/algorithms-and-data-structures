class LinkedList {
	private:
		Node* head;
		Node* tail;
		int length;

	public:
		LinkedList(int value) {
			Node* newNode = new Node(value);
			head = newNode;
			tail = newNode;
			length = 1;
		}
};
