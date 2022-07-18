#include<bits/stdc++.h>
using namespace std;
long long n,m,k,x;

long long fastPower(long long base, long long power)
{
    long long result = 1;
    while (power > 0) {
        if (power & 1) {//此处等价于if(power%2==1)
            result = result * base % n;
        }
        power >>= 1;//此处等价于power=power/2
        base = (base * base) % n;
    }
    return result;
}

int main()
{
    cin>>n>>m>>k>>x;
    cout<<(x%n+m%n*fastPower(10,k)%n)%n<<endl;
    return 0;
}