#include "stdio.h"
void cat(char *p1,char *p2)
{
    char *p=p1;
    while(*p)    p++;
    while(*p2)  *p++=*p2++;
    *p='\0';
}
int main()
{
    char str1[200],str2[200];
    gets(str1);
    gets(str2);
    cat(str1,str2);
    puts(str1);
}