//字符串匹配，两个字符串s，t，若t是s子串，输出t在s的位置（t首字符在s对应位置），否则输出-1

#include "stdio.h"
#include "string.h"

int main()
{
	char s[1000],t[1000];
	int flag,flagt,len1,len2;
	scanf("%s%s",s,t);
	len1=strlen(s);
	len2=strlen(t);
	flagt=0;
	for(int i=0;i<=len1-len2;i++)
	{
		flag=0;
		for(int j=0;j<=len2-1;j++)
		{
			if(t[j]!=s[j+i])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("%d",i);
			flagt=1;//t是s的子串 
		}
	}
	if(flagt==0)
	{
		printf("-1");
	}
	return 0;
 } 
