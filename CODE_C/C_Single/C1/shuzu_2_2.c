#include "stdio.h"
#include "string.h"
void main()
{
    char str1[80], str2[80];
    int len;
    gets(str1);
    gets(str2);
    len=strlen(str1)+strlen(str2);
    if(strcmp(str1,str2)>0)
    {
        strcat(str1,str2);
        puts(str1);
    }
    else
    {
        strcat(str2,str1);
        puts(str2);
    }
    printf("Len=%d\n",len);
}
