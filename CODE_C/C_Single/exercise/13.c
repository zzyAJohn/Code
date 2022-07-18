#include "stdio.h"
int main()
{
    int i,j,a[3][3];
    for(i=0;i<3;i++)
    for(j=0;j<=i;j++)
    a[i][j]=i*j;
    printf("%d,%d",a[1][2],a[2][1]);
}