#include "stdio.h"

void sortP(int a[],int n)

{

    int i,j,tmp;

    for(i=0;i<n-1;i++)

        for(j=0;j<n-1-i;j++)

            if(a[j]>a[j+1])

            {

                tmp=a[j];

                a[j]=a[j+1];

                a[j+1]=tmp;

            }
}

int main()
{
    int a[5]={1,2,5,3,4};
    sortP(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}