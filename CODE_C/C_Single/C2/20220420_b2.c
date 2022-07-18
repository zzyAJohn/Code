#include "stdio.h"

int s(char a[],char b[])
{
    int num=0,n=0;
    while(*(a+num)!='\0')
    num++;
    while(b[n])
    {
        *(a+num)=b[n];
        num++;
        n++;
    }
    return num;
}
int main()
{
    char str1[81],str2[81],*p1=str1,*p2=str2;
    gets(p1);
    gets(p2);
    printf("%d\n",s(p1,p2));
    return 0;

}