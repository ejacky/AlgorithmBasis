#include <stdio.h>
// �������Ա��˳����� 
int search(int k[], int n, int key)
{
	int i;
	k[n] = MAX_KEY;
	for (i = 0; key > k[i]; i++);
	if (i < n && k[i] == key) return i;  
	return -1;
} 

// �������Ա��˳����� 
int binSearch(int k[], int n, int key) 
{
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2; // pos = (key - k[low]) / (k[high] - k[low]) * (high - low) + low;  ���ڷֲ����ȵĺ����� 
		if (key == k[mid]) return mid;
		if (key > k[mid]) low = mid + 1;
		else high = mid - 1
	}
	return - 1
}

// ������������� 
typedef struct node { 
	int key;
	struct node *next;
} NODE; 

int search1(NODE *h, int key, NODE **p, NODE **q)
{
	NODE *u = NULL, *v = h;
	for (; v != NULL && v->key < key; u = v, v = v->next);
	*p = u; *q = v;
	return v != NULL && v->key == key;
}

 // ���������
typedef struct node2 {
	int data; 
	struct node2* lchild, * rchild; 
} EleNode;

// ��̬���� 
EleNode *search(EleNode *t, int key)
{
	while (t != NULL)
		if (t->data == key) return t;
		else if (key < t->data) t = t->lchild;
		else t = t->rchild;
	return NULL;
} 

// ��̬����
void search(EleNode *t, int key, EleNode **pkpt, EleNode **kpt)
{
	*pkpt = NULL;
	*kpt = t;
	while (*kpt != NULL) {
		if ((*kpt)->data == key) return;
		*pkpt = *kpt;
		if (key < (*kpt)->data) *kpt = (*kpt)->lchild;
		else *kpt = (*kpt)->rchild;
	}	
} 

int insert(EleNode **pt, int key)
{
	
}

int deleteNode(EleNode **pt, int key)
{ 

}


/** ƽ���������� **/
typedef struct node {
	int ele;
	int height;
	struct node *left, *right; 
} AvlNode;

typedef struct {
	AvlNode *root;
} AVLDISJSETS; 


int main()
{

} 
