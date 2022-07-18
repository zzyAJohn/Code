#include <iostream>
using namespace std;
const float pi=3.14;

class Point
{
    private:
    float x,y;
    public:
    Point(float a,float b){x=a;y=b;}
    virtual float S(){return 0;}
    virtual float V(){return 0;}
    ~Point(){}
};

class Circle:public Point
{
    protected:
    float r;
    public:
    Circle(float a,float b,float c):Point(a,b){r=c;}
    virtual float S(){return pi*r*r;}
    virtual float V(){return 0;}
    ~Circle(){}
};

class Yuanzhu:public Circle
{
    private:
    float h;
    public:
    Yuanzhu(float a,float b,float c,float d):Circle(a,b,c){h=d;}
    virtual float S(){return 2*pi*r*r+2*pi*r*h;}
    virtual float V(){return pi*r*r*h;}
    ~Yuanzhu(){}
};

int main()
{
    Point *p=new Circle(0,0,3);
    cout<<p->S()<<","<<p->V()<<endl;
    p=new Yuanzhu(0,0,3,5);
    cout<<p->S()<<","<<p->V()<<endl;
    return 0;
}