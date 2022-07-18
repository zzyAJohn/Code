#include <bits/stdc++.h>
using namespace std;

int tree(long long n,long long m,long long tree[])//n树的数量，m需要的长度
{
    long long longest=0,left=0,sum=0;
    for(long long i=0;i<n;i++)
    longest=max(longest,tree[i]);
    while(left<=longest)
    {
        long long middle=left+(longest-left)/2;
        sum=0;//每次循环重新计算sum
        for(long long i=0;i<n;i++)
        {
            if(tree[i]>middle)
            sum+=tree[i]-middle;
        }
        if(sum<m)
        longest=middle-1;
        else left=middle+1;
    }
    cout<<left-1;
    return 0;
}

int main()
{
    long long N,M;
    scanf("%lld%lld",&N,&M);
    long long trees[N];
    for(long long i=0;i<N;i++)
    scanf("%lld",&trees[i]);
    tree(N,M,trees);
    return 0;
}