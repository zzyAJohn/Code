/*菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
给出一个正整数a，要求菲波那契数列中第a个数对1000取模的结果是多少。*/

// #include <cstdio>
// #include <algorithm>
// #include <cmath>
#include <iostream>
using namespace std;

typedef long long ll;
ll f[1000001];

int main()
{
    
    f[0]=1;
    f[1]=1;
    for(int i=2;i<1000001;i++)
    {
        f[i]=(f[i-1]+f[i-2])%1000;
    }
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<f[a[i]-1]<<endl;
    }
    return 0;
}