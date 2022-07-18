
#include "stdio.h"
double fun(int x)
{
	int i;
	double s=0;
	for(i=1;i<=x;i++)
	{  
		s+=1.0/i;
	}
	return s;
}
void main()
{   double  sum;
    int n;
	scanf("%d",&n);
	sum=fun(n);
	printf("sum=%lf\n",sum);
}