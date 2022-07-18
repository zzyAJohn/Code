//圆类的设计

#include <iostream>
using namespace std;
const float pi=3.14;

class Circle
{
    private:
    float x,y,r;
    int color;
    public:
    Circle( float a,float b,float c,int d)
    {
        x=a;y=b;r=c;color=d;
        cout<<"constructor is called"<<endl;
    }
    float area(){return pi*r*r;}
    float circum(){return 2*pi*r;}
    void arg(float dr){r=r+dr;}
    void move(float dx,float dy){x=x+dx;y=y+dy;}
    void updatecolor(int c){color=c;}
    ~Circle(){cout<<"deconstructor is called"<<endl;}
};

int main()
{
    float x1,y1,r1;
    int color1;
    cout<<"input values of a circle"<<endl;
    cin>>x1>>y1>>r1>>color1;
    Circle c1(x1,y1,r1,color1),*p=&c1;
    cout<<c1.area()<<","<<c1.circum()<<endl;
    c1.move(-1.2,3.4);
    p->arg(4.7);
    cout<<p->area()<<","<<p->circum()<<endl;
    return 0;
}