#include "stdio.h"
#include "string.h"
int fun(char (*ss)[20],int *n)
{
    int i,k=0,len=20;
    for(i=0;i<5;i++)
    {
        len=strlen(ss[i]);
        if(i==0) *n=len;
        if(len<*n)
        {
            *n=len;
            k=i;
        }
    }
    return(k);
}
int main()
{
    char ss[5][20]={"shanghai","guangzhou","beijing","tianjin","chongqing"};
    int n,k,i;
    printf("\nThe original strings are :\n");
    for(i=0;i<5;i++)  puts(ss[i]);
    k=fun(ss,&n);
    printf("\nThe length of shorest string is : %d\n",n);
    printf("\nThe shortest string is : %s\n",ss[k]);
}