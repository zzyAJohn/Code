//设计复数类Complex和友元运算符重载>>和<<，实现复数类对象标准输入，输出

#include <iostream>
using namespace::std;

class Complex
{
    private:
    float real,image;
    public:
    Complex(float a=0,float b=0){real=a;image=b;}
    friend ostream& operator <<(ostream& out,Complex& c);
    friend istream& operator >>(istream& in,Complex& c);
};

ostream& operator <<(ostream& out,Complex& c)
{
    out<<"(";
    out<<c.real;
    out<<",";
    out<<c.image;
    out<<")";
    return out;
}

istream& operator >>(istream& in,Complex& c)
{
    in>>c.real;
    in>>c.image;
    return in;
}

int main()
{
    Complex a;
    cin>>a;
    cout<<a;
    return 0;
}