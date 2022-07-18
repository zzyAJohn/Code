#include "stdio.h"     //指针
int main()
{   int a,b;
    int *p1,*p2;	
	p1=&a;
	p2=&b;
	printf("\nPlease input a,b:");
	scanf("%d,%d",&a,&b);
	printf("a=%d,b=%d\n",*p1,*p2);
	printf("p1:%d,p2:%d\n",*p1,*p2);
	(*p1)++;
	(*p2)++;
	printf("a=%d,b=%d\n",a,b);
} 