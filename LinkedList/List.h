#include <iostream>

struct Node {
	int data;
	std::string name;
	Node* next = NULL;

public:
	Node(int newData, std::string newName) {
		data = newData;
		name = newName;
	}
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

	void insertBack(int data, std::string name);
	void insertFront(int data, std::string name);
	void remove(int data);
	void printList();
};