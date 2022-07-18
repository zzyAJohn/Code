#include "stdio.h"
int main()
{                             //每五个换一行
    int i;
    for(i=1;i<20;i++)
    {
        if((i-1)%5==0)
        printf("\n");
    }
}