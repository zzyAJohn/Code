#include <iostream>
using namespace std;

class Complex
{
    private:
    double real;
    double image;
    public:
    Complex(double r=0,double i=0){real=r;image=i;}
    friend Complex operator +(Complex &c1,Complex &c2);        //重载运算符+
    friend Complex operator -(Complex &c1,Complex &c2);        //重载运算符-
    friend void outputcomplex(Complex &comp);                  //输出
    ~Complex(){}
};

Complex operator +(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real+c2.real;
    c.image=c1.image+c2.image;
    return c;
}

Complex operator -(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real-c2.real;
    c.image=c1.image-c2.image;
    return c;
}

void outputcomplex(Complex &comp)
{
    cout<<"("<<comp.real<<","<<comp.image<<")";
}

int main()
{
    Complex c1(3.2,7.3);
    Complex c2(4.2,-6.1);
    Complex result;

    result=operator +(c1,c2);
    outputcomplex(c1);
    cout<<"+";
    outputcomplex(c2);
    cout<<"=";
    outputcomplex(result);
    cout<<"\n-------------------"<<endl;

    result=operator -(c1,c2);
    outputcomplex(c1);
    cout<<"-";
    outputcomplex(c2);
    cout<<"=";
    outputcomplex(result);
    cout<<"\n-------------------"<<endl;
}