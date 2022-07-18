#include<bits/stdc++.h>
using namespace std;
long long n,m,p;

long long fastPower(long long base, long long power)
{
    long long result = 1;
    while (power > 0) {
        if (power & 1) {//此处等价于if(power%2==1)
            result = result * base % m;
        }
        power >>= 1;//此处等价于power=power/2
        base = (base * base) % m;
    }
    return result;
}

int main()
{
    cin>>n>>m>>p;
    cout<<fastPower(n,p)<<endl;
    return 0;
}