
#include<stdio.h>
#include<malloc.h >
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

// 又称最小增量排序， 在 插入排序的基础上又加一层 
 
void shellSort1(int e[], int n)
{
	int g;
	int i, j;
	int t;
	for (g = n / 2; g >= 1; g = g / 2)   // 比 插入排序多的一层 
	{
		for (i = g; i < n; i++) {
			for (t = e[i], j = i; j > g && t < e[j - g]; j -= g)
		    	e[j] = e[j - g];
			e[j] = t;    
		}
	}
}

// shell 
void shellSort(int e[], int n)
{
	int g;
	int i, j;
	int t;
	for (g = n / 2; g >= 1; g = g / 3 + 1)
	{
		for (i = g; i < n; i++) {
			for (t = e[i], j = i; j > g && t < e[j - g]; j -= g)
		    	e[j] = e[j - g];
			e[j] = t;    
		}
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

// 堆排序是选择排序的优化
//  
void shiftDown(int e[], int k, int n);
void heapSort(int e[], int n)
{
	printf("this is heap sort \n");
	int i; int temp; 
	for (i = n / 2 - 1; i >= 0; i--)
		shiftDown(e, i, n);
	for (i = n - 1; i > 0; i--)  {
		temp = e[0]; e[0] = e[i]; e[i] = temp;
		shiftDown(e, 0, i - 1);
	} 
}  

void shiftDown(int e[], int k, int n)
{
	int j; int temp;
	temp = e[k];
	for (j = 2 * k + 1; j < n; k = j, j = 2 * k + 1) {
		if (j < n - 1 &&  e[j] < e[j + 1])
			j++;
		if (temp >= e[j]) break;
		e[k] = e[j];
	}
	e[k] = temp;
}




// 基数排序
void countSort(int e[], int n, int m)
{
	int *t, *b, k, j, d;
	t = (int *)malloc(m * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	for (k = 0; k < m; k++) t[k] = 0;
	for (k = 0; k < n; k++) t[e[k]]++;
	for (d = n, j = m - 1; j >= 0; j--)
		d = t[j] = d - t[j];
	for (k = 0; k < n; k++)
		b[t[e[k]]++] = e[k];
	for (k = 0; k < n; k++)
		e[k] = b[k];
	free(t);
	free(b); 
} 


void countSort2(int e[], int n, int m, int g)
{
	int *t, *b, k, j, d;
	int u, v;
	t = (int *) malloc(m * sizeof(int));
	b = (int *) malloc(n * sizeof(int));
	for (k = 0; k < m; k++) t[k] = 0;
	for (k = 0; k < n; k++) {
		for (u = e[k], v = g; v > 0; u /= 10, v--);
		t[u%10]++;
	}
	for (d = n, j = m - 1; j >= 0; j--)
		d = t[j] = d - t[j];
	for (k = 0; k < n; k++) {
		for (u = e[k], v = g; v > 0; u /= 10, v--);
		b[t[u%10]++] = e[k];
	} 
	for (k = 0; k < n; k++)
		e[k] = b[k];
	free(t);
	free(b);
}


// 冒泡排序既有由后往前， 又有由前往后；  
//  一下均为由后往前 
void bubbleSort1(int e[], int n )
{
	int i, j;
	int temp;
	for (i = 1; i < n; i++) 
	{
		for (j = n - 1; j >= i; j--)
		{
			if (e[j-1] > e[j])
			{
				temp = e[j - 1];
				e[j - 1] = e[j];
				e[j] = temp;
			}
		}
	}
}

void bubbleSort2(int e[], int n) 
{
    int i, j, flag;
	int temp;
	for (i = 1; i < n; i++)
	{
		for (flag = 0, j = n - 1; j >= i; j-- ) 
			if (e[j - 1 ] > e[j])
			{
				temp = e[j - 1];
				e[j - 1] = e[j];
				e[j] = temp; 
				flag = 1; 
			}
		if (flag == 0) break;   /* 若 后面循环已经没有在交换， 表示已经排好序； 前面循环可以停止  */
	}
}

void bubbleSort3(int e[], int n)
{
	int i, j, k, low;
	int temp;
	while  (low < n - 1  )
	{
		for (k = n - 1, j = n - 1; j > low; j--) 
		{
			if (e[j - 1] > e[j])
			{
				temp = e[j - 1];
				e[j - 1] = e[j];
				e[j] = temp;
				k = j;
			}
		}
		low = k;  
	} 
} 


#define swap(x, y) {int t; t = x; x = y; y = t;}
#define printx(n) {printf("%i\n", x##n)}
#define MAX(a, b) ((a > b)? a : b)

int median3(int e[], int left, int right)
{
	int center = (left + right) / 2;
	int t;
	if (e[center] < e[left])
		swap(e[left], e[center]);
	if (e[right] < e[left])
		swap(e[left], e[right ]);
	if (e[right] < e[center])
		swap(e[right], e[center]);
	swap(e[center], e[right - 1]);
	return e[right - 1];
}


void quickS(int e[], int left, int right)
{
	int i, j, pivot, t;
	if (left + 10 <= right) {
		pivot = median3(e, left, right);
		i = left + 1;       
		j = right - 2;
		for (; i < j; ) {
			while(e[i] < pivot) i++;
			while(pivot < e[j]) j--;
			if (i < j) swap(e[i], e[j]);
		}
		swap(e[i], e[right - 1]);
		quickS(e, left, i - 1);
		quickS(e, i + 1, right);	
	} else {
		insertSort(e +  left, right - left + 1);
	}
}

// 快排
void quickSort(int e[], int n)
{
	quickS(e, 0, n - 1);
} 


//  归并排序， 有递归和非递归两种。 一下为非递归 
// 对有序序列进行合并 
void merge(int *x, int *y, int low, int m, int high) 
{
	int i = low,  j = m + 1, k = low;
	while (i <= m && j < = high)
		y[k++] = (x[i] <= x[j ])? x[i++]: x[j++];
	while(j <= m) y[k++] = x[i++];
	while(j <= high) y[k++] = x[j++]; 
}

void mergePass(int *x, int *y, int n, int len)
{
	int i = 0, j;
	while(i + 2 * len < n) {
		merge(x, y, i, i + len - 1, i + 2 * len - 1);
		i += 2 * len;
	}
	if (i + len <= n - 1)
		merge(x, y, i, i + len - 1, n - 1);
	else 
		for (j = i; j < n - 1; j++)
			y[j] = x[j];
}

void mergeSort(int *x, int n)
{
	int *t; int len;
	t = (int *) malloc(n * sizeof(int));
	len = 1;
	while (len < n) {
		mergePass(x, t, n, len);
		len *= 2;
		mergePass(t, x, n, len);
		len *= 2;
	}
	free(t);
}

void test() 
{
	int i;
	for (i = 10; i > 0; i--) 
	{
		printf(" i = %d, ", i);
	}
	
}

//void tmp(int t[])
//{
//	swap(&t[0], &t[1]);
//	
//	printf("%d", t[0]);
//}
main()
{   
    int e[11] = {2, 1, 5, 8, 7, 11, 18, 14, 3, 12, 15};
    int e1[7] = {7, 3, 6, 5, 4, 2, 1};
    //selectSort(e, 9);
    //bubbleSort3(e1, 7);
    //shellSort(e1, 7);
    //quickSort(e, 11);
    //heapSort(e, 11);
    countSort(e, 11,  5);
	show(e, 11);
//	int t1[2] = {3, 4}; 
//	int test2 = 4;
//	int test = MAX(6, 4);
//	
//	tmp(t1);

	//printf("%d", t1[0]);
}




