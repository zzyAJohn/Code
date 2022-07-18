#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{   char pass_str[80];                          //定义字符数组pass_str
    int i=0;
    while(1)                                  //检验密码
    {
        printf("请输入密码\n");
        gets(pass_str);            //输入密码
        if(strcmp(pass_str,"password")!=0)
           printf("口令错误，按任意键继续\n");
        else
           break;                //密码正确跳出循环
           get char();          //按任意键
           i++;
           if(i==3) exit(0);     //错误三次退出程序
    }
    printf("口令正确，按任意键继续");
}