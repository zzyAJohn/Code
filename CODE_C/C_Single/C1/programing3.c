#include "stdio.h"
int w;
char fun(int w)                       //判断是否为素数
{
    int i;
    for(i=2;i<w;i++)
    if(w%i==0)  break;               //如果能被除，不是素数，跳出，且下一步不相等，输出N
    if(i==w)  return('Y');           //如果一直没有，直到i等于w，为素数，输出Y
    else return('N');
}
int main()
{
    printf("%c",fun(13));
}