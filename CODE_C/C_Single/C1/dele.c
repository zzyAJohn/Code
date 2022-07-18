#include "stdio.h"

void dele(char *s)

{int n=0,i;

for(i=0;s[i];i++)

if(s[i]>='0'||s[i]<='9') s[n++]=s[i];

s[n]=0;

}

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",a[i]);
    }
    dele(a);
    return 0;
}