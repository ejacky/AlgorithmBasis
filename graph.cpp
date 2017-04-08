#include <stdio.h>
// 定义邻接矩阵
#define MaxVerticesNum 100
#define MaxInt 9999 
typedef char VertexType;
typedef int EdgeType;
typedef struct {
	vexs[MaxVerticesNum];
	edges[MaxVerticesNum][MaxVerticesNum];
} Mgraph;

// 创建邻接矩阵 
void CreateMGraph(Mgraph *G)
{
	
}

// 定义邻接表
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

// 创建邻接表 
void CreateALGraph(ALGraph *G)
{
	
} 

// 图的深度优先遍历
// 利用递归，实际为堆栈 
// 二叉树的前度优先遍历 
void DFSTraverse(MgRaphael *G)
{
	
}

// 利用邻接表 
void DFS(ALGraph *G, int i)
{
	
}

// 利用邻接矩阵
void DFSM(Mgraph *G, int i) 
{
	
}

// 图的广度优先队列
// 实际用的队列
// 二叉树的层次遍历

// 利用邻接表 
void BFS(ALGraph *G, int k)
{
	
}

// 利用邻接矩阵
void BFSM(Mgraph *G, int k)
{
	
} 
 
// Dijkstra 算法 即最短路径问题
int ShortestPath(Mgraph *G, int v, int dist[], int path[])
{
	
}

// Floyd 算法
// 每一对顶点间最短路径长度
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

/* 生成树和最小生成树*/
// Prim 算法 
// 适合密集
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

// Kruskal 算法那
// 适合分散 
 
int main()
{
	
}
