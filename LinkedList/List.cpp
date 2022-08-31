#include "List.h"
#include <iostream>

using namespace std;

void LinkedList::printList() {
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
	if (head == NULL) {
		cout << "No entries in list.";
		return;
	}
	if (head->data == data) {
		head = head->next;
	}
	else {
		Node* currNode = head;
		while (currNode->next != NULL) {
			if (currNode->next->data == data) {
				currNode->next = currNode->next->next;
				return;
			}
			currNode = currNode->next;
		}
	}
}

int main() {
	LinkedList list;

	list.insertFront(1, "Ryan");
	list.insertBack(2, "Alex");
	list.insertBack(3, "Birdy");

	list.remove(3);
	list.printList();

}