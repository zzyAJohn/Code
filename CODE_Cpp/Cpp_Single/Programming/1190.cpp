//楼梯有n(71>n>0)阶台阶,上楼时可以一步上1阶,也可以一步上2阶,也可以一步上3阶，编程计算共有多少种不同的走法。
#include <iostream>
using namespace std;
typedef long long ll;
ll t[71];

int main()
{
    t[0]=1;
    t[1]=2;
    t[2]=4;
    for(int i=3;i<71;i++)
    {
        t[i]=t[i-1]+t[i-2]+t[i-3];
    }
    int i=0;
    int a[8];
    int x;
    while(cin>>x)
    {
        if(x==0) return 0;
        cout<<t[x-1]<<endl;
    }
    return 0;
}