#include <stdio.h>
typedef struct node {
	int ele;
	struct node *next;
} EleNode;

typedef struct {
    EleNode *head;
} DISJSETS;

void initSets(DISJSETS *S)
{
	S->head = (EleNode *) malloc(sizeof(EleNode));
	S->head->next = NULL;
	S->head->ele = -1; 
}

int insertEle(int a, DISJSETS *S)
{
	EleNode *p = S->head->next, *q = S->head, *s;
	while(p != NULL && p->ele < a) {
		q = p;
		p = p->next;
	}
	if (p != NULL && p->ele == a) return 0
	s = (EleNode *) malloc(sizeof(EleNode));
	s->ele = a;
	s->next = p; q->next = s;
	return 1;
}

int deleteEle(int a, DISJSETS * S)
{
	
}

// 集合并操作 
void unionSet(DISJSETS *S1,  DISJSETS *S2)
{
	
}

// 集合交操作 
void intersection(DISJSETS *S1, DISJSETS *S2)
{
	
}

// 集合的差操作
// 剔除 S1 里 包含 S2 的元素 
void difference(DISJSETS *S1, DISJSETS *S2)
{
	EleNode *p = S1->head->next, *q = S2->head->next, *t = S1->head;
	while (p != NULL && q != NULL) {
		if (p->ele == q->ele) {
			t->next = p->next;free(p);
			p = t->next; 
			q = q->next;
		} else if (p->ele < q->ele) {
			t = t->next;
			p = p->next;
		} else {
			q = q->next;
		}
	}
}

 
int main()
{
	
}


