#include <iostream>
const float pi=3.14;
using namespace std;

class Point //点类的定义
{private:
    float x,y;
public:
Point(float a,float b)
{
    x=a;y=b;
}
};

class Circle:public Point //圆类的定义
{protected:
    float r;
public:
    Circle(float a,float b,float c):Point(a,b)
{

    r=c;
}
float circum()
{
    return 2*pi*r;
}
float area()
{
    return pi*r*r;
}
};

class Cylinder:public Circle
{
    protected:
    float h;
    public:
    Cylinder(float a,float b,float c,float d):Circle(a,b,c)
    {
        h=d;
    }
    float area()
    {
        return (2*pi*r*r+2*pi*r*h);
    }
    float volume()
    {
        return pi*r*r*h;
    }
};

int main()
{
    float a1,b1,c1,d;
    cout<<"please input three parameters of circle:"<<endl;
    cin>>a1>>b1>>c1;
    Circle c(a1,b1,c1);
    cout<<"please input four parameters of Cylinder:"<<endl;
    cout<<c.circum()<<","<<c.area()<<endl;
    Cylinder cy(4.5,-3.4,6.5,5.6);
    cout<<cy.area()<<","<<cy.circum()<<endl;
    return 0;
}