
#include<stdio.h>
void show(int disp[], int n) 
{
	int i, j;
	for (i = 0; i < n; i++) 
	{
		printf("%d ", disp[i]);
	}
}

// 插入排序 
// 相邻两个比较 
void insertSort(int e[], int n)
{
	int i, j; 
	int tmp;
	for (i = 1; i < n; i++)
	{
		tmp = e[i];
		for (j = i - 1; j >= 0 && e[j] > tmp; j--)
		{
			printf(" j=%d ", j);
			e[j+1] = e[j];
		}
		e[j+1] = tmp;
	} 
}

// 选择排序
// 选出最小的 
void selectSort(int e[], int n)
{
	int i, j;
	int minIndex;
	int tmp;
	for (i = 0; i < n - 1; i++) 
	{
		minIndex = i;
		for (j = i + 1; j < n; j++) 
		{
			if (e[j] < e[i]) 
			{
				minIndex = j;
			}
		}
		
		if (minIndex != i) 
		{
			tmp = e[i];
			e[i] = e[minIndex];
			e[minIndex] = tmp;
		}
	}
	
}
  



void test() 
{
	int i;
	for (i = 10; i > 0; i--) 
	{
		printf(" i = %d, ", i);
	}
	
}
main()
{   
    int e[9] = {2, 1, 5, 8, 7, 11, 18, 14, 3};
    selectSort(e, 9);
    show(e, 9);
}




