#include "stdio.h"
int fun(int n)
{
    int t;
    if(n==0||(n==1)) t=3;
    else t=n*fun(n-1);
    return t;
}
void main()
{
    printf("%5d\n",fun(5));
}
