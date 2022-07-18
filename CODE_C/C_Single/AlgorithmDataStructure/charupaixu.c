#include "stdio.h"

void Insert(int A[],int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    if(A[i]<A[i-1])
    {
        A[0]=A[i];
        for(j=i-1;A[0]<A[j];--j)
        A[j+1]=A[j];
        A[j+1]=A[0];
    }
}

int main()
{
    int S[5]={15,24,1,42,67};
    Insert(S,5);
    return 0;
}