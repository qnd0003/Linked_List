#include "linked_list.h"

int main() {
	LinkedList* myList = (struct LinkedList*) malloc(sizeof(struct LinkedList));
	insert(myList, 44);
	insert(myList, 55);
	print(myList);
	return 0;
}
