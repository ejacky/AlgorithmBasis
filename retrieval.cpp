#include <stdio.h>
// 有序线性表的顺序查找 
int search(int k[], int n, int key)
{
	int i;
	k[n] = MAX_KEY;
	for (i = 0; key > k[i]; i++);
	if (i < n && k[i] == key) return i;  
	return -1;
} 

// 有序线性表的顺序查找 
int binSearch(int k[], int n, int key) 
{
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2; // pos = (key - k[low]) / (k[high] - k[low]) * (high - low) + low;  对于分布均匀的很有用 
		if (key == k[mid]) return mid;
		if (key > k[mid]) low = mid + 1;
		else high = mid - 1
	}
	return - 1
}

// 有序链表的搜索 
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

 // 二叉检索数
typedef struct node2 {
	int data; 
	struct node2* lchild, * rchild; 
} EleNode;

// 静态搜索 
EleNode *search(EleNode *t, int key)
{
	while (t != NULL)
		if (t->data == key) return t;
		else if (key < t->data) t = t->lchild;
		else t = t->rchild;
	return NULL;
} 

// 动态检索
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


/** 平衡二叉检索树 **/
typedef struct node {
	int ele;
	int height;
	struct node *left, *right; 
} AvlNode;

typedef struct {
	AvlNode *root;
} AVLDISJSETS; 

int height(AvlNode *t)
{
	return t == NULL? -1: t->height;
}

int max(int x, int y)
{
	return x > y? x: y;
}

void insertEle(int x, AVLDISJSETS *set)
{
	insertAvl(x, &set->root); 
}

void insertAvl(int x, AvlNode **ptr)
{
	AvlNode *t = *ptr;
	if (t == NULL) {
		*ptr = t = (AvlNode *) malloc(sizeof(AvlNode)); 
		t->ele = x;
		t->left = t->right = NULL;
	} else if (x < t->ele) {
		insertAvl(x, &t->left);
		if (height(t->left) - height(t->right) == 2) {
			if (x < t->left->ele)
			    rotateWithLeftChild(ptr);
			else 
			    doubleWithLeftChild(ptr);
		}
	} else if (x > t->ele) {
		insertAvl(x, &t->right);
		if (x > t->right->ele)
			rotateWithRightChild(ptr);
		else
			doubleWithRightChild(ptr);
	} else; // 问题
	t->height = max(height(t->left), height(t->right)) + 1;  
}

void rotateWithLeftChild(AvlNode **k2pt)
{
	AvlNode *k1, *k2 = *k2pt;
	k1 = k2->left;
	k2->left = k1->right;
	k1->right = k2;
	k2->height = max(height(k2->left), height(k2->right)) + 1;
	k1->height = max(height(k1->left), k2->height) + 1;
	*k2pt = k1; 
}

void rotateWithRightChild(AvlNode **k2pt)
{
	AvlNode *k1, *k2 = *k2pt;
	k1 = k2->right;
	k2->right = k1->left;
	k1->left = k2;
	k2->height = max(height(k2->left), height(k2->right)) + 1;
	k1->height = max(height(k1->left), k2->height) + 1;
	*k2pt = k1; 
}

void doubleWithLeftChild(AvlNode **k1pt)
{
	rotateWithRightChild(&(*k1pt)->left);
	rotateWithLeftChild(k1pt);
}

void doubleWithRightChild(AvlNode **k1pt)
{
	rotateWithLeftChild(&(*k1pt)->right);
	rotateWithRightChild(k1pt);
} 


int main()
{

} 
