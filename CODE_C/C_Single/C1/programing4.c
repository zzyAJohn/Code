#include "stdio.h"
int w;
long fun(int w)                              //求各位数之和
{
    int a;
    long b=0;
    while(w!=0)
    {
        a=w%10;
        b+=a;
        w=w/10;
    }
    return b;
}
int main()
{
    printf("%ld",fun(6538));
}