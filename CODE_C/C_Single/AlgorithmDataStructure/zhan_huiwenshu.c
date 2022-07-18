#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stack
{
    int top;
    char str[100];
}STACK;
int main()
{
    int len,i,mid,next;
    char str[100];
    STACK s;
    s.top=0;
    printf("请输入一组数字或字母：");
    gets(str);
    len=strlen(str);2
    mid=len/2;
    for(i=0;i<mid;i++)//将前半部分入栈
    {
        s.str[s.top]=str[i];
        s.top++;
    }
    if(len%2!=0)//奇数
    {
        next=mid+1;
    }else{
        next=mid;
    }
    while(s.top!=0)//作比较，相等则pop，直到栈空
    {
        if(s.str[s.top-1]==str[next])
        {
            s.top--;
            next++;
        }
        else
        {
            break;
        }
    }
    if(s.top==0)
    {
        printf("是回文\n");
    }
    else
    {
        printf("不是回文\n");
    }
    return 0;
}
