#include "stdio.h"
void main()                                  //方阵转置
{
    int i,j,a[3][3]={1,2,3,4,5,6,7,8,9},t;
    for(i=0;i<3;i++)
       for(j=i+1;j<3;j++)
       {
           t=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]= t;
       }
    for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
              printf("%4d",a[i][j]);
           printf("\n");   
       }   
}