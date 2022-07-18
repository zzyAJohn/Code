#include "stdio.h"
int function(int x , int y)
{
	int z;
	z=x>y?x:y;
	return z;
}
int main()
{
	int a, b, max;
	printf("\n input 2 integer numbers a,b:");
	scanf("%d,%d",&a,&b);
	max=function(a,b);
	printf("Max value is %d\n", max);
}