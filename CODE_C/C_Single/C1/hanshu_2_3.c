#include "stdio.h"
int fun()
{
    static int x=1;
    x++;
    return x;
}
main()
{
    int x=0,i;
    for(i=0;i<3;i++)
       x+=fun();
    printf("x=%d\n",x);   
}