#include "linked_list.h"

int main() {
	/* linked list
	struct {
		struct node* head
		struct node* tail
		struct node* ref;
	}
	*/
	LinkedList* myList = (struct LinkedList*) malloc(sizeof(struct LinkedList));

	// insert back
	insert(myList, 44);
	insert(myList, 55);
	insert(myList, 32);
	
	print(myList);

	remove(myList, 55);
	print(myList);
	remove(myList, 44);

	print(myList);
	free(myList);
	myList = NULL;
	return 0;
}
