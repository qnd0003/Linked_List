#include "linked_list.h"

// insert end
void insert(struct LinkedList* myList, int n) {
	if ((*myList).head == NULL) {
		(*myList).head = (struct Node*) malloc(sizeof(struct Node));
		(*myList).head -> num = n;
		(*myList).head -> next = (*myList).tail;
		(*myList).ref = (*myList).head;
	} else {
		struct Node* new = (struct Node*) malloc(sizeof(struct Node));
		new -> num = n;
		new -> next = (*myList).tail;

		(*myList).ref -> next = new;
		(*myList).ref = new;
	}
	(*myList).size++;
}

// insert front
void insert_top(struct LinkedList* myList, int n) {
	if ((*myList).head == NULL) {
		(*myList).head = (struct Node*) malloc(sizeof(struct Node));
		(*myList).head -> num = n;
		(*myList).head -> next = (*myList).tail;

		(*myList).ref = (*myList).head;
	} else {
		struct Node* new = (struct Node*) malloc(sizeof(struct Node));
		new -> num = n;
		new -> next = (*myList).head;
		(*myList).head = new;
	}
}

// output
void print(struct LinkedList* myList) {
	struct Node* temp = (*myList).head;
	int index = 0;
	while (temp != NULL) {
		printf("%d", temp -> num);
		if (index < (*myList).size - 1) {
			printf(" -> ");
		}
		index ++;
		temp = temp -> next;
	}
	printf("\n");
}

// remove all instances of node
void remove_index(struct LinkedList* myList, int n) {
	if (n > (*myList).size-1 || n < 0 || (*myList).size == 0) {
		printf("index is out of range\n");
		exit(1);
	}

	printf("remove index: %d\n", n);

	struct Node* temp = (*myList).head;
	struct Node* last = (*myList).head;
	int index = 0;
	while (temp != NULL) {
		// the head
		if (n == 0) {
			(*myList).head = temp -> next;
			free(temp);
			temp = NULL;
			(*myList).size -= 1;
			return;
		}
		if (index == n) {
			last -> next = temp -> next;
			free(temp);
			temp = NULL;
			(*myList).size -= 1;
			return;
		}
		last = temp;
		index++;
		temp = temp -> next;
	}
}
