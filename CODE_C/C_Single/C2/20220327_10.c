#include "stdio.h"


void sortS(int a[],int n,int type)
//type=0从小到大，type是1时从大到小

{
    int i, j,index;
    int tmp;
    for(i=0;i<n-1;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
            if(a[index]>a[j]&&type==0 ||type==1)
                index=j;
        tmp=a[i];
        a[i]=a[index];
        a[index]=tmp;
    }
}

int main()
{
    int a[5]={1,2,5,3,4};
    sortS(a,5,0);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}