#include <stdio.h>
typedef struct {
	int *s;
} DISJSETS;

void initDisjSets(DISJSETS *set, int numEle)
{
	int k;
	set->s = (int *) malloc(sizeof(int) * numEle);
	for (k = 0; k < numEle; k++) 
		set->s[k] = -1;
}
 
void unionSets(DISJSETS *set , int root1, int root2)
{
	set->s[root2] = set->s[root1];
}

int find(DISJSETS *set, int x)
{
	if (set->s[x] < 0)
    	return x;
	return find(set , set->s[x]);
}

void unionSetsBySize(DISJSETS *set, int root1, int root2)
{
	if (set->s[root2] < set->s[root1]) {
		set->s[root2] += set->s[root1];
		set->s[root1] = root2;	 
	} else {
		set->s[root1] += set->s[root2];
		set->s[root2] = root1;
	}
}
 
int main()
{
	
}
