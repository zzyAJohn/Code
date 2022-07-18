#include <iostream>
using namespace std;

template <class T>

T max(T a[],int n)
{
    T max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}

int main()
{
    int a[4]={1,5,4,3};
    float b[3]={1.1,2.2,0.5};
    cout<<max(a,4)<<endl;
    cout<<max(b,3)<<endl;
    return 0;
}