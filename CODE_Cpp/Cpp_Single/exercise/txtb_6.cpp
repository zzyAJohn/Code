//设计求两同长度同类型一维数组对应元素相加的函数模板

#include <iostream>
using namespace std;

template <class T>
T Sum(T a[],T b[],int n)
{
    T sum[n];
    for(int i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<" ";
    }
    return 0;
};

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,1,2,3,4};
    float c[3]={0.5,1.5,2.5};
    float d[3]={8.3,7.2,4.5};
    Sum(a,b,5);
    Sum(c,d,3);
    return 0;
}