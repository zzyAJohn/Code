//以下函数用来在w数组中插入x。n所指向的存储单元中存放w数组中字符个数,
//数组w中的字符已按从小到大的顺序排列，插入后数组w中的字符仍有序

#include "stdio.h"

void fun(char *w,char x,int *n)
{
    int i,p=0;
    w[*n]=x;
    while(x>w[p])
    ------;
    for(i=*n;i>p;i--)
    w[i]=------;
    w[p]=x;
    ++*n;
}

int main()
{
    return 0;
}