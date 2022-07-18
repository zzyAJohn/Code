/*输入两个字符串，验证其中一个串是否为另一个串的子串。
输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2)
否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1)
否则，输出 No substring。*/

#include "stdio.h"
#include "string.h"

int bf( char *text, char *find)
{
    int text_len=strlen(text);
    int find_len=strlen(find);
    if(text_len<find_len||*text=='\0'||*find=='\0')
    return -1;
    char *s=text;
    char *p=s;
    char *q=find;
    while(*p!='\0')
    {
        if(*p==*q)
        {
            p++;
            q++;
        }
        else
        {
            s++;
            p=s;
            q=find;
        }
        if(*q=='\0')
        return (p-text)-(q-find);//所在位置
    }
    return -1;
}

int main()
{
    char s1[200],s2[200];
    scanf("%s%s",s1,s2);
    if(bf(s2,s1)==-1)
    {
        if(bf(s1,s2)==-1) printf("No substring\n");
        else printf("%s is substring of %s\n",s2,s1);
    }
    else printf("%s is substring of %s\n",s1,s2);
    return 0;
}