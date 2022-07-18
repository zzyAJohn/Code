#include "stdio.h"
int function(int x,int y);                    //函数声明语句
void main()
{
	int m, n,result;
    printf("\nPlease input 2 numbers m,n:");
    scanf("%d,%d",&m,&n);
	if(m>n)
		result=function(m,n);
	else
		result=function(n,m);
	printf("the result is:%d\n",result);
}
int function(int x, int y)               //大数乘10加小数
{ 
	int z;
    z=x*10+y;
	return z;
}