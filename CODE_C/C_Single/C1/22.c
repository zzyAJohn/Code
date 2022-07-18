#include "stdio.h"

int x,y,z;

void P(int *x,int y)
{
    --*x;y++;z=*x+y;
}

int main()
{
    x=5;y=2;z=0;
    P(&x,y);
    printf("%d,%d,%d#",x,y,z);
    P(&y,x);
    printf("%d,%d,%d",x,y,z);
    return 0;
}