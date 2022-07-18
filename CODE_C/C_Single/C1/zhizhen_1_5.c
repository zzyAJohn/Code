#include "stdio.h"
int main()
{
	char str[20],*p;
	p=str;
	gets(p);
	printf("\nstring=%s\n ", p);
}