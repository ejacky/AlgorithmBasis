#include <stdio.h>

int main(void)
{
	int count = 10, x;
	int* pointer;
	int * t;
	
	pointer = &count;
	x = *pointer;
	
	*t = &pointer;
	
	printf("count = %i, x = %i \b, *pointer = %i\b ",  count, x, *pointer);
	printf("pointer = %x", pointer); 
	printf("**t = %i", *t);  
}
