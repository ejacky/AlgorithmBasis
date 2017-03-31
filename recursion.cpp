#include <stdio.h>

long fac(int n)
{
	if (n <=1 ) return 1L;
	return n * fac(n - 1 );
}  

main()         
{
int m = fac(4);
printf("%d", m); 
}
