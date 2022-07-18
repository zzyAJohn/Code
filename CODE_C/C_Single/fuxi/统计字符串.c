#include <stdio.h>
#include <string.h>

#define MAXS 15

void StringCount( char *s );

void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];
    ReadString(s);
    StringCount(s);
    return 0;
}
/* 你的代码写到这里*/
void StringCount( char *s )
{
    int bigWord=0, smallWord=0, kongGe=0, nums=0, other=0;
    for (int i =MAXS; i >= 0; i--)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') bigWord++;
        else if (s[i] >= 'a' && s[i] <= 'z') smallWord++;
        else if (s[i] >= '0' && s[i] <= '9') nums++;
        else if (s[i] >= ' ') kongGe++;
        else other++;
    }
    printf("%d %d %d %d %d", bigWord, smallWord, kongGe, nums, other);
}