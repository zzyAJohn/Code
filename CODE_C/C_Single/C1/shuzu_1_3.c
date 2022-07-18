#include "stdio.h"
void main()
{
    int a[5]={8,6,5,4,1},i,temp;
    for(i=0;i<2;i++)
    {
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    printf("The sorted numbers:\n");
    for(i=0;i<5;i++)
       printf("%4d",a[i]);
    printf("\n");
}