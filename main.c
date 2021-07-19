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
	printf("Linked List: ");
	print(myList);
	
	// removing
	remove_index(myList, 0);
	print(myList);

	// deallocate
	free(myList);
	myList = NULL;
	return 0;
}
