#include "stdio.h"
int main()
{
    int a=1;
    printf("%d,%d",(++a,a=a+5),a);
}