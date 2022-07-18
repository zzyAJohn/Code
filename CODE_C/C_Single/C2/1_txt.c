/*从高到低输入10个学生成绩，已知等级A有2人，B有3人，等级c有4人，等级D有1人。
请编写程序输出各等级的成绩区间（即基于输入的10个成绩，确定每个等级的最高分和最低分)。*/

#include "stdio.h"

int main()
{
    float a[10];
    int i;
    printf("请从高到低输入10组成绩:");
    for(i=0;i<10;i++)
    scanf("%f",&a[i]);
    printf("A区间:%.2f-%.2f\n",a[1],a[0]);
    printf("B区间:%.2f-%.2f\n",a[4],a[2]);
    printf("C区间:%.2f-%.2f\n",a[8],a[5]);
    printf("D:%.2f\n",a[9]);
    return 0;
}