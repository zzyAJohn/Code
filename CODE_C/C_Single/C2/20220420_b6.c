#include "stdio.h"

int main()
{
    int a[]={2,4,6},*prt=&a[0],x=8,y,z;
    for(y=0;y<3;y++)
    z=(*(prt+y)<x)?*(prt+y):x;
    printf("%d\n",z);
    return 0;
}