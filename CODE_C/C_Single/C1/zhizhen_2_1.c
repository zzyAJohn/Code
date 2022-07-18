#include "stdio.h"
void fun(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("\nPlease input a,b:");
    scanf("%d,%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    fun(p1,p2);
    printf("Now a=%d,b=%d\n",a,b);
}