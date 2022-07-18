#include "stdio.h"

int main()
{
    int n,i,j,sum=0;
    int a[2222]={6};
    int b[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&n);
    for(i=1;i<=2222;i++)              //初始化每一个数字为火柴棒
    {
        j=i;
        while(j>=1)                   //个位开始，然后十位
        {
            a[i]+=b[j%10];
            j=j/10;
        }
    }
    for(i=0;i<=1111;i++)
    {
        for(j=0;j<=1111;j++)
        if(a[i]+a[j]+a[i+j]+4==n)
        sum++;
    }
    printf("%d",sum);
    return 0;
}