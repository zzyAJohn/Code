
#include "stdio.h"
int main()
{
	int a[7]={8,7,6,5,4,3,1},i,temp,*p,*q;
	p=&a[0];
	q=&a[6];
	for( ;p<q;p++,q--)
	{
		temp=*p;
	    *p=*q;
	    *q=temp;
	}
	printf("The sorted numbers:\n");
	for(i=0;i<7;i++)
		printf("%4d",a[i]);
	printf("\n");
}