#include "stdio.h"
int main()
{   int i,a[10];
    int *p;
	printf("Please input array a:\n");
	p=&a[0];
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nThe array is:");
	p=a;
	for(i=0;i<10;i++)
	{
		printf("%4d",*p++);
	}
}