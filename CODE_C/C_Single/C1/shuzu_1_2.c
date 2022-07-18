#include "stdio.h"
void main()
{
    int i,a[10],sum=0;
    printf("\nplease input array a[10]:");
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);
    for(i=0;i<10;i++)
      if(a[i]%2==1&&i%2==1)
      {
          sum++;
          printf("a[%d]:%4d\n",i,a[i]);
      }
      printf("sum=%d\n",sum);
}