#include <iostream>
using namespace std;

template <class T>
T Sum(T a,T b)
{
    T sum;
    sum=a+b;
    return sum;
};

int main()
{
    cout<<Sum(15,7)<<endl;
    cout<<Sum(45.23,54.47)<<endl;
}