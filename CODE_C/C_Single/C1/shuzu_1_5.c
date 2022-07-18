#include "stdio.h"
void main()
{
    int a[10],i,max,min,sum=0;
    float ave;
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
       printf("%d ",a[i]);
       printf("\n");
       max=min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
           min=a[i];
        if(a[i]>max)
           max=a[i];
        sum=sum+a[i];   
    }
    ave=sum/10.0;
    printf("ave=%f,max=%d,min=%d",ave,max,min);

}