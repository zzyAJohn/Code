#include "stdio.h"
void main()
{
    int i,a[10];
    printf("\nplease input array a:");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    printf("\nthe array is:");
    for(i=9;i>=0;i--)
       printf("%4d",a[i]);   
}