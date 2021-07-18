#include "linked_list.h"

// insert end
void insert(struct LinkedList* myList, int n) {
	if (myList -> head == NULL) {
		myList -> head = (struct Node*) malloc(sizeof(struct Node));
		myList -> head -> num = n;
		myList -> head -> next = myList -> tail;

		myList -> ref = myList -> head;
	} else {
		struct Node* new = (struct Node*) malloc(sizeof(struct Node));
		new -> num = n;
		new -> next = (*myList).tail;

		(*myList).ref -> next = new;
		(*myList).ref = new;
	}
}

void print(struct LinkedList* myList) {
	struct Node* temp = (*myList).head;
	while (temp != NULL) {
		printf("%d -> ", temp -> num);
		temp = temp -> next;
	}
	printf("\n");
}
