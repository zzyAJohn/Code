#include "stdio.h"
int main()
{
    int i,j,temp,min;
    int v[20];
    for(i=0;i<5;i++)
    scanf("%d",&v[i]);
    for(i=0;i<=9;i++)
    {
        min=i;
        for(j=i+1;j<=5;j++)
           if(v[min]>v[j])
            min=j;
            if(min!=i)
        {
            temp=v[i];
            v[i]=v[min];
            v[min]=temp;
        
        }}
        printf("\nresult:\n)");
        for(i=0;i<5;i++)
        printf("%d",v[i]);
    
}