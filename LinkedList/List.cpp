#include "List.h"
#include <iostream>

using namespace std;

void LinkedList::printList() {
	Node* currNode = head;
	while (currNode != NULL) {
		cout << currNode->data;
		if (currNode->next != NULL) {
			cout << ", ";
		}
		currNode = currNode->next;
	}
	cout << "" << endl;
}

void LinkedList::insertFront(int data) {
	Node* newNode = new Node(data);
	newNode->next = head;
	head = newNode;
}

void LinkedList::insertBack(int data) {
	Node* newNode = new Node(data);
	
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

void LinkedList::remove(int id) {
	if (head == NULL) {
		cout << "No entries in list.";
		return;
	}
	if (head->data == id) {
		head = head->next;
	}
	else {
		Node* currNode = head;
		while (currNode->next != NULL) {
			if (currNode->next->data == id) {
				currNode->next = currNode->next->next;
				return;
			}
			currNode = currNode->next;
		}
	}
}