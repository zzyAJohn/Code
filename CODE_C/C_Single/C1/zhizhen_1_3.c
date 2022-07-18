
#include "stdio.h"
int main()
{
	int a[10]={12,54,345,87,-23,0,35,24,76,987},max;
	int *p,*q;
	max=a[0];
	p=a;
	q=a+10;
	while(p<q)
	{
		if(*p>max) max=*p;
		p++;
	}
	printf("max=%4d\n",max);
}