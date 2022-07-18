//珠心算

#include<stdio.h>
#include<stdlib.h>
int a[110];
int n;
int num=0;   //答案数量
int v[110];  //判断去重
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       scanf("%d",&a[i]);
    for(int i=1;i<n;i++)   //左边界
       for(int j=i+1;j<=n;j++)   //右边界
          for(int k=1;k<=n;k++)   //无脑暴搜
             if(k!=i&&k!=j&&a[i]+a[j]==a[k]&&v[k]==0)   //没有数过并且不是边界
                {
                   num++;
                   v[k]=1;   //用过啦~
                }
    printf("%d",num);
    //system("pause");   //无视这一行~
    return 0;
}