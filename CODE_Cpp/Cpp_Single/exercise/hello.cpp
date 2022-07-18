#include <iostream>
#include "cstdio"
using namespace std;

int main()
{
    cout<<"hello!"<<endl;
    cout<<3<<endl;
    printf("too\n");
    std::cout<<"3\n";
    int a=100,&b=a;
    cout<<a<<'\n'<<b<<endl;
    b++;
    cout<<a<<'\n'<<b<<endl;
    return 0;
}