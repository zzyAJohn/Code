#include <iostream>
using namespace std;

class Complex
{
    private:
    double real;
    double image;
    public:
    Complex(double r=0,double i=0){real=r;image=i;}
    friend void inputcomplex(Complex &comp);                   //输入
    friend Complex operator +(Complex &c1,Complex &c2);        //重载运算符+
    friend Complex operator -(Complex &c1,Complex &c2);        //重载运算符-
    friend Complex operator *(Complex &c1,Complex &c2);        //重载运算符*
    friend void outputcomplex(Complex &comp);                  //输出
    ~Complex(){}
};

void inputcomplex(Complex &comp)
{
    cin>>comp.real>>comp.image;
}

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

Complex operator *(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real*c2.real-c1.image*c2.image;
    c.image=c1.real*c2.image+c1.image*c2.real;
    return c;
}

void outputcomplex(Complex &comp)
{
    cout<<"("<<comp.real<<","<<comp.image<<")";
}

int main()
{
    Complex c1,c2,result;
    cout<<"请输入第一个复数的实部和虚部："<<endl;
    inputcomplex(c1);
    cout<<"请输入第二个复数的实部和虚部："<<endl;
    inputcomplex(c2);

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

    result=operator *(c1,c2);
    outputcomplex(c1);
    cout<<"*";
    outputcomplex(c2);
    cout<<"=";
    outputcomplex(result);
    cout<<"\n-------------------"<<endl;
}