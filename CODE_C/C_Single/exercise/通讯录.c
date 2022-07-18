#include "stdio.h"
#include "string.h"
int main()
{
    int m;
    char num[3][10],name[3][10],tel[3][10];
    for(m=0;m<3;m++)
    {
        printf("\n请输入第%d个记录：\n",m+1);
        printf("学号：");
        gets(num[m]);
        printf("姓名：");
        gets(name[m]);
        printf("电话：");
        gets(tel[m]);
    }
        printf("学号          姓名           电话\n");
        for(m=0;m<3;m++)
           printf("%-15s%-15s%-15s\n",num[m],name[m],tel[m]);
}