#include "stdio.h"
#include "windows.h"
int main()
{
    char *p;
    char a[]="abcdefghijkl";
    p=a;
    while (*p!=0)
    {
        printf("%c",*p);
        p++;
        Sleep(200);
    }
    return 0;
}
yanshi("");
   huiche();