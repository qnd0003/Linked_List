#include <stdlib.h>
#include <stdio.h>

// node
typedef struct Node {
	int num;
	struct Node* next;
} node;	

// linked list
typedef struct LinkedList {
	struct Node* head;
	struct Node* tail;
	struct Node* ref;
} LinkedList;

// print the linked list
void print(struct LinkedList* myList);
// insert new node in the back
void insert(struct LinkedList* myList, int);
// insert new node in the front
void insert_top(struct LinkedList*, int);
// remove all instances
void remove(struct LinkedList*, int);
