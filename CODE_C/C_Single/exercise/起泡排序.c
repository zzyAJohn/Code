#include "stdio.h"
int main()
{
    int i,j,temp;
    int date[10]={1,2,5,4,3,5,1,6,9,10};
    for(i=0;i<10-1;i++)                       //外循环：控制比较趟数
        for(j=0;j<10-i-1;j++)                 //内循环：进行每趟比较
            if(date[j]>date[j+1])             //大则交换
             {
                 temp=date[j];
                 date[j]=date[j+1];
                 date[j+1]=temp;
             };
            printf("\nresult:\n");
for(i=0;i<10;i++)
    printf("%d,",date[i]);
}