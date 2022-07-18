#include "stdio.h"
int w;
long fun(int n)                                      //斐波那契数列
{
    int f1=1,f2=1,i;
    long f,s=2;
    for(i=3;i<=n;i++)
       {
           f=f1+f2;
           s=s+f;
           f1=f2;
           f2=f;
       }
       return s;
}
int main()
{
    printf("输入一个数：");
    scanf("%d",&w);
    printf("%d",fun(w));
}