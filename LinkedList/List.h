#include <iostream>

struct Node {
	int data;
	Node* next = NULL;
	Node* prev = NULL;

public:
	Node(int newData) {
		data = newData;
	}
};

class LinkedList {
	Node* head;

public:
	LinkedList() {
		head = NULL;
	}

	void insertBack(int data);
	void insertFront(int data);
	void remove(int data);
	void printList();
};