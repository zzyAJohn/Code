#include <stdio.h>
int main()
{
    int x,e,i;
    for(x=100;x<=200;x++)
    {i=2;
    e=x/2;
    while (i<=e)
    {
        if(x%i==0) break;
        i++;
    }
    if(i>e)
    printf("%d\n",x);
    }
    return 0;
}