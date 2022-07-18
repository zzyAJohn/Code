#include "stdio.h"

int fun1(int a,int b)
{
    int c;
    a+=a;
    b+=b;
    c=fun2(a,b);
    return c*c;
}
int fun2(int a,int b)
{
    int c;
    c=a*b%3;
    return c;
}
void main()
{
    int a=11,b=19;
    printf("%d\n",fun1(a,b));
}