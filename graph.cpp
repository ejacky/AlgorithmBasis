#include <stdio.h>
// �����ڽӾ���
#define MaxVerticesNum 100
#define MaxInt 9999 
typedef char VertexType;
typedef int EdgeType;
typedef struct {
	vexs[MaxVerticesNum];
	edges[MaxVerticesNum][MaxVerticesNum];
} Mgraph;

// �����ڽӾ��� 
void CreateMGraph(Mgraph *G)
{
	
}

// �����ڽӱ�
typedef struct node {
	int adjvex;
	int weight;
	struct node *next;
} EdgeNode;

typedef struct vnode {
	VertexType vertex;
	EdgeNode *firstedge;
} VertexNode;

typedef VertexNode AdjList[MaxVerticesNum];

typedef struct {
	AdjList adjlist;
	int n, e;
} ALGraph; 

// �����ڽӱ� 
void CreateALGraph(ALGraph *G)
{
	
} 

// ͼ��������ȱ���
// ���õݹ飬ʵ��Ϊ��ջ 
// ��������ǰ�����ȱ��� 
void DFSTraverse(MgRaphael *G)
{
	
}

// �����ڽӱ� 
void DFS(ALGraph *G, int i)
{
	
}

// �����ڽӾ���
void DFSM(Mgraph *G, int i) 
{
	
}

// ͼ�Ĺ�����ȶ���
// ʵ���õĶ���
// �������Ĳ�α���

// �����ڽӱ� 
void BFS(ALGraph *G, int k)
{
	
}

// �����ڽӾ���
void BFSM(Mgraph *G, int k)
{
	
} 
 
// Dijkstra �㷨 �����·������
int ShortestPath(Mgraph *G, int v, int dist[], int path[])
{
	
}

// Floyd �㷨
// ÿһ�Զ�������·������
int path[100][100], a[100][100];
void AllPath(Mgraph *G)
{
}

void printPath(int i, int j)
{
}

void printAllPath(int n)
{
	
}

/* ����������С������*/
// Prim �㷨 
// �ʺ��ܼ�
typedef struct {
	int fromVex, toVex;
	int length;
} TreeEdgeNode;

typedef TreeEdgeNode MST[MaxVerticesNum - 1];
Mgraph G;
MST T;
 
void initCandidateSet(Mgraph *G, MST T, int r)
{
 	
}  

int selectLightEdge(MST T, int k, int n)
{
	
}

void ModifyCandidateSet(Mgraph *G, MST T, int k, int v)
{
	
}

void PrintMST(Mgraph *G, MST T, int r)
{
	
}

// Kruskal �㷨��
// �ʺϷ�ɢ 
 
int main()
{
	
}
