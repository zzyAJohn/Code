#include "stdio.h"
#include "windows.h"
char x[]="zzy";
int yanshi(char a[])
{
    char *p;
    p=a;
    while (*p!=0)
    {
        printf("%c",*p);
        p++;
        Sleep(200);
    }
    return 0;
}
int huiche()
{
    printf("\n\n\n");
    return 0;
}
int main()
{
    yanshi("abcdef5");
    huiche();
}