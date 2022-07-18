/*将 1, 2...9共 9 个数分成三组，
分别组成三个三位数，且使这三个三位数的比例是 A:B:C
，试求出所有满足条件的三个三位数，若无解，输出 No!!!。
三个数，A,B,C,若干行，每行 3 个数字。按照每行第一个数字升序排列。保证 A<B<C。*/

#include "stdio.h"

int main()
{
   int i,j,a[10]={0},x,y,z,t=0;
   scanf("%d%d%d",&x,&y,&z);
   for(i=1;i<987;i++)
   {
       if(x*i<=987) 
       {
           a[x*i%10]++;
           a[x*i/10%10]++;
           a[x*i/100]++;
       }
       if(y*i<=987)
       {
           a[y*i%10]++;
           a[y*i/10%10]++;
           a[y*i/100]++;
       }
       if(z*i<=987)
       {
           a[z*i%10]++;
           a[z*i/10%10]++;
           a[z*i/100]++;
       }
       for(j=1;j<=9;j++)
       if(a[j]==0) break;
       if(j>=10)
       {
            printf("%d %d %d\n",x*i,y*i,z*i);
            t=1;
       }
       for(j=1;j<=9;j++)
       a[j]=0;
   } 
   if(t==0) printf("No!!!");
   return 0;
}