#include <iostream>
using namespace std;

template <class T>
T max(T a[],int n)
{
    T temp=a[0];
    for(int i=0;i<n;i++)
    {
        if(temp<a[i])
        temp=a[i];
    }
    return temp;
}

int main()
{
    int a[5]={1,5,4,3,7};
    double b[7]={2.1,6.5,1.4,9.5,4.7,8.2,4.1};
    cout<<max(a,5)<<endl;
    cout<<max(b,7)<<endl;
}