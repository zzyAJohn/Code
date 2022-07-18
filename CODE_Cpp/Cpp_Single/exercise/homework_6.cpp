/*单继承：点到圆，圆到圆柱体，圆到圆锥体，点到椭圆，
点到矩形，矩形到长方体，输出相应形体的面积和体积，
其中点类中的S()及volume()为虚函数，
求其它形体中的S()及volume()体现出运行时多态*/

#include <iostream>
using namespace std;
const float pi=3.14;

class Point
{
    private:
    float x,y;//坐标
    public:
    Point(float a,float b){x=a,y=b;}
    virtual float S(){return 0;}
    virtual float V(){return 0;}
    ~Point(){}
};

class Circle:public Point
{
    protected:
    float r;//半径
    public:
    Circle(float a,float b,float c):Point(a,b){r=c;}
    virtual float S(){return pi*r*r;}
    virtual float V(){return 0;}
    ~Circle(){}
};

class Cylinder:public Circle
{
    protected:
    float h;//高
    public:
    Cylinder(float a,float b,float c,float d):Circle(a,b,c){h=d;}
    virtual float S(){return 2*pi*r*h+2*pi*r*r;}
    virtual float V(){return pi*r*r*h;}
    ~Cylinder(){}
};

class Cone:public Circle
{
    protected:
    float l,h;//母线，高
    public:
    Cone(float a,float b,float c,float d,float e):Circle(a,b,c){l=d;h=e;}
    virtual float S(){return pi*r*l+pi*r*r;}
    virtual float V(){return 1/3*pi*r*r*h;}
    ~Cone(){}
};

class Ellipse:public Circle
{
    protected:
    float i,j;//长半轴，短半轴
    public:
    Ellipse(float a,float b,float c,float d,float e):Circle(a,b,c){i=d;j=e;}
    virtual float S(){return pi*i*j;}
    virtual float V(){return 0;}
    ~Ellipse(){}
};

class Rectangle:public Point
{
    protected:
    float i,j;//长，宽
    public:
    Rectangle(float a,float b,float c,float d):Point(a,b){i=c;j=d;}
    virtual float S(){return i*j;}
    virtual float V(){return 0;}
    ~Rectangle(){}
};

class Cuboid:public Rectangle
{
    protected:
    float h;//高
    public:
    Cuboid(float a,float b,float c,float d,float e):Rectangle(a,b,c,d){h=e;}
    virtual float S(){return 2*(i*j+i*h+j*h);}
    virtual float V(){return i*j*h;}
    ~Cuboid(){}
};

int main()
{
    Point *p=new Circle(1,2,3);
    cout<<p->S()<<p->V()<<endl;
    p=new Cylinder(0,0,3,5);
    cout<<p->S()<<p->V()<<endl;
    return 0;
}