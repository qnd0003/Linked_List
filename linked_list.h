#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	int num;
	struct Node* next;
} node;	

typedef struct LinkedList {
	struct Node* head;
	struct Node* tail;
	struct Node* ref;
} LinkedList;

void print(struct LinkedList* myList);
void insert(struct LinkedList* myList, int);
