//计算abb*b=acbc，求abcd

#include "stdio.h"

int main()
{
    int a,b,c,x1,x2;
    for(a=1;a<=9;a++)
    for(b=2;b<=9;b++)
    for(c=0;c<=9;c++)
    {
        x1=a*100+b*11;//abb
        x2=a*1000+c*101+b*10;//acbc
        if(x1*b==x2){printf("a=%d,b=%d,c=%d",a,b,c);}
    }
    return 0;
}