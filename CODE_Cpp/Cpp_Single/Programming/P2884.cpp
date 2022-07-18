#include <bits/stdc++.h>
using namespace std;

void Month(int n,int m,int a[])  //n天，m组
{
  
    int left=0,right=0,middle;
    for(int i=0;i<n;i++)
    {
        left=max(left,a[i]);
        right+=a[i];
    }               //left最大，right总和
    while(left<right)
    {
        middle=left+(right-left)/2;
        int sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]<=middle)
            sum+=a[i];
            else sum=a[i],cnt++;
        }
        if(cnt>=m)
        left=middle+1;
        else right=middle;
    }
    cout<<left<<endl;
}

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int m[N];
    for(int i=0;i<N;i++)
    scanf("%d",&m[i]);
    Month(N,M,m);
    return 0;
}