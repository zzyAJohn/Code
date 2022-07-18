//分数及复数的友元运算符重载函数+-*/>><<

#include <iostream>
using namespace std;

class Fenshu
{
    private:
    float a,b;
    public:
    Fenshu(float i=0,float j=0){a=i,b=j;}
    friend ostream& operator <<(ostream& output,Fenshu& shu);
    friend istream& operator >>(istream& input,Fenshu& shu);

};

ostream& operator <<(ostream& output,Fenshu& shu)
{
    output<<shu.a;
    output<<"/";
    output<<shu.b;
    return output;
}

istream& operator >>(istream& input,Fenshu& shu)
{
    input>>shu.a;
    input>>shu.b;
    return input;
}

int main()
{
    Fenshu a;
    cin>>a;
    cout<<a;
    return 0;
}