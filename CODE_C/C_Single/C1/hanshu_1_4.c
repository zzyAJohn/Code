
#include "stdio.h"
int fun(int x,int y)
{  
	int z;
	z=x-y;
	if(z>=0) return z;
	else return -z;
}
void main()
{
	int a, b, c;
	printf("\nPlease input 2 numbers a,b:");
	scanf("%d,%d",&a,&b);
		c=fun(a,b);
	printf("c=%d\n",c); 
 }
