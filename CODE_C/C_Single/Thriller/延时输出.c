#include "stdio.h"
#include "windows.h"
void main()
{
char str[] = "你好，你是我的！";
char tmp[3] = {0};
int i = 0;
int len = strlen(str);
for(i = 0; i < len; )
{
memset(tmp,0,3);
if(str[i] >= 0x80)
{
strncpy(tmp,&(str[i]),2);
i += 2;
}
else
{
strncpy(tmp,&(str[i]),1);
i += 1;
}
printf("%s",tmp);
Sleep(1000);
}
printf("\n");
}