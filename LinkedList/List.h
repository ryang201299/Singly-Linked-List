#include <string>

struct Node {
	int data;
	string name;

	Node(int newData, string newName) {
		data = newData;
		name = newName;
	}
};

class LinkedList {
	Node* head;

	void printList();
	void insertFront();
	void insertBack();
	void remove();
};