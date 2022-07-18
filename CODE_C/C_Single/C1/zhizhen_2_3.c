#include "stdio.h"
void fun(int *s,int t,int *k)
{
    int i;
    *k=0;
    for(i=0;i<t;i++)
    {
        if(s[*k]<s[i])
        *k=i;
    }
}
int main()
{
    int a[10]={87,75,96,62,55,98,70,45,89,77},k;
    fun(a,10,&k);
    printf("a[%d]=%d\n",k,a[k]);
}