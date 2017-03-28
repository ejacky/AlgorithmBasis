#include <stdio.h>
typedef struct node {
	int ele;
	struct node *next;
} EleNode;

typedef struct {
    EleNode *head;
} DISJSETS;


