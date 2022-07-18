#include "stdio.h"

long Func(int a,int n);

int main(void)

{long sn=0;

    int i,n,a;

    scanf("%d%d",&n,&a);

    for(i=1;i<=n;i++)

        sn=sn+Func(a,i);                        

    printf("%d",sn);

    return 0;}

long Func(int a,int n)

{ if(n==0) return 0;

else return(Func(a,n-1)*10+a);} 