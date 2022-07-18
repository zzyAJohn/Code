#include "stdio.h"
int main()
{   char str[4],*p;
    int i=0;
	p=str;
	gets(str);
	while(*p)
	{
		if(*p!= ' ')
			str[i++]=*p;
		p++;
	}
	str[i]='\0';
	puts(str);
}