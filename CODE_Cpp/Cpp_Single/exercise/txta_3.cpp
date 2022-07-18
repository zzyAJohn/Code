/*定义点类Point，数据成员x,y坐标，函数成员构造函数，
面积，体积虚函数，派生球类Ball，
增加坐标z，半径r，求球的表面积和体积*/

#include <iostream>
using namespace std;
const float pi=3.14;

class Point
{
    private:
    float x,y;
    public:
    Point(float a,float b){x=a;y=b;}
    virtual float area(){}
    virtual float volume(){}
    ~Point(){}
};

class Ball:public Point
{
    private:
    float z,r;
    public:
    Ball(float a,float b,float c,float d):Point(a,b){r=d;z=c;}
    virtual float area(){return 4*pi*r*r;}
    virtual float volume(){return 4/3*pi*r*r*r;}
    ~Ball(){}
};

int main()
{
    Ball ball(1,1,5,2);
    cout<<"球的表面积是:"<<ball.area()<<endl;
    cout<<"球的体积是:"<<ball.volume()<<endl;
    return 0;
}