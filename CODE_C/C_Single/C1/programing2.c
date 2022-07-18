#include "stdio.h"
int w;
long fun(int n)                         //1到w奇数之和
{
    long y=0;
    int i;
    for(i=1;i<=n;i++)
    if(i%2==1)
    y+=i;
    return y;
}
int main()
{
    printf("输入一个数：");
    scanf("%d",&w);
    printf("%d",fun(w));
}