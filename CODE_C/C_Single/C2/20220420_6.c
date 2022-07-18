#include "stdio.h"
#include "string.h"

int main()
{
    char p[20]={'a','b','c','d'},q[]="abc",r[]="abcde";
    strcpy(p+strlen(q),r);
    strcat(p,q);
    printf("%d%d\n",sizeof(p),strlen(p));
    return 0;
}