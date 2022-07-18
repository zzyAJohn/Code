
#include "stdio.h"
void printstar(int n)
{
	while(n--)
		printf("*");
}
void printenter()
{
	printf("\n");
}
void main()
{
	int i,num;
	scanf("%d,",&num);
	for(i=1;i<=num;i++)
	{
		printstar(i);
		printenter();
	}
}