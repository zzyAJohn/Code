#include "stdio.h"
void main()
{
    int a[4][4],i,j;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    for(i=0;i<4;i++)             //赋初值
       for(j=0;j<4;j++)
          scanf("%d",&a[i][j]);
    for(i=0;i<4;i++)           
       for(j=0;j<4;j++)
        {
            if(i==j)                           //输出主对角线
              sum1+=a[i][j];
            if(i+j==3)                          //输出次对角线
              sum2+=a[i][j];
            if(i==0||j==0||i==3||j==3)          //输出矩阵周边
              sum3+=a[i][j];
            if(i>=j)                            //输出主对角线（含）下方
              sum4+=a[i][j];
        }
    printf("主对角线和=%d\n次对角线和=%d\n矩阵周边之和=%d\n主对角线及其下方之和=%d\n",sum1,sum2,sum3,sum4);         
}