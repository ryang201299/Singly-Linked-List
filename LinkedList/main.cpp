#include "List.h"

using namespace std;

int main() {
	LinkedList list;

	list.insertFront(1);
	list.insertBack(2);
	list.insertBack(3);

	list.remove(2);

	list.printList();
}