#include "stdio.h"
int main()
{
    float b=0,d=0;
    for(int m=0; m<36; m++)
    {
        b=(590000-16388.89*m)*0.003875;
        d=d+b;
        printf("第%3d月利息为：￥%-7.2f \n",m+1,b);
    }
    printf("利息共￥%.2f\n",d);
}