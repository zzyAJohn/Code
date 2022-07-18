#include "stdio.h"
int length(char *p)
{
    int n=0;
    while(*p!='\0')
    {
        n++;
        p++;
    }
    return n;
}
int main()
{
    int len;
    char s[80];
    printf("Input String:");
    gets(s);
    len=length(s);
    printf("Length=%d\n",len);
}
