#include "stdio.h"
void main()
{
    int a[2][3],i,j,max,maxi,maxj;
    for(i=0;i<2;i++)
       for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
    max=a[0][0];
    maxi=maxj=0;
    for(i=0;i<2;i++)
      for(j=0;j<3;j++)
       if(a[i][j]>max)
       {
           max=a[i][j];
           maxi=i;
           maxj=j;
       }
    printf("max:a[%d][%d]=%d\n",maxi,maxj,max);   
}