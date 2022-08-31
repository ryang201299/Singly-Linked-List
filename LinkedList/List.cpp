#include "List.h"
#include <iostream>

using namespace std;

void LinkedList::printList() {
	cout << "Linked list: ";
	Node* currNode = head;
	while (currNode != NULL) {
		cout << "[" << currNode->data;
		cout << ", " << currNode->name;
		cout << "]";
		if (currNode->next != NULL) {
			cout << ", ";
		}
		currNode = currNode->next;
	}
	cout << "" << endl;
}

void LinkedList::insertFront(int data, string name) {
	Node* newNode = new Node(data, name);
	newNode->next = head;
	head = newNode;
}

void LinkedList::insertBack(int data, string name) {
	Node* newNode = new Node(data, name);
	
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* currNode = head;
		while (currNode->next != NULL) {
			currNode = currNode->next;
		}
		currNode->next = newNode;
	}
}

void LinkedList::remove(int data) {
	// remove node from any position in list
}

int main() {
	LinkedList list;

	list.insertFront(1, "Ryan");
	list.insertBack(2, "Alex");
	list.printList();
}