/*设计点类Point，数据成员x，y坐标，函数成员构造函数，
求面积，体积虚函数，派生圆柱类Cylinder，
数据成员增加半径和高，对面积，体积改写，
主函数求圆柱c1(4.2,-5.7,7.6,3.8)的面积，体积*/

#include <iostream>
using namespace std;
const float pi=3.14;

class Point
{
    protected:
    float x,y;
    public:
    Point(float a,float b){x=a;y=b;}
    virtual float S(){}
    virtual float V(){}
    ~Point(){}
};

class Cylinder:public Point
{
    protected:
    float r,h;//半径，高
    public:
    Cylinder(float a,float b,float c,float d):Point(a,b){r=c;h=d;}
    virtual float S(){return 2*pi*r*r+2*pi*r*h;}
    virtual float V(){return pi*r*r*h;}
};

int main()
{
    Cylinder c1(4.2,-5.7,7.6,3.8);
    cout<<c1.S()<<" "<<c1.V()<<endl;
    return 0;
}