//设计圆类Circle，数据成员有圆心的x，y坐标，半径，成员函数构造，求周长，面积函数

#include <iostream>
using namespace std;
const float pi=3.14;

class Circle
{
    private:
    float x,y,r;
    public:
    Circle(float a,float b,float c){x=a;y=b;r=c;}
    float C(){return 2*pi*r;}
    float S(){return pi*r*r;}
    ~Circle(){}
};

int main()
{
    Circle a(0,0,3);
    cout<<a.C()<<" "<<a.S()<<endl;
    return 0;
}