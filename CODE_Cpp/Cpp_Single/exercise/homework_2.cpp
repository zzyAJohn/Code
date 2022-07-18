//判断圆与直线的位置关系

#include <iostream>
#include <math.h>
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
    float getx(){return x;}
    float gety(){return y;}
    float getr(){return r;}
    ~Circle(){cout<<"deconstructor is called"<<endl;}
};

class Line
{
    private:
    float a,b,c;
    public:
    Line(float a1,float b1,float c1){a=a1;b=b1;c=c1;}
    float geta(){return a;}
    float getb(){return b;}
    float getc(){return c;}
};

int position(Circle ci,Line li)
{
    float d=fabs(li.geta()*ci.getx()+li.getb()*ci.gety()+
    li.getc())/sqrt(li.geta()*li.geta()+li.getb()*li.getb());
    //求圆心到直线的距离
    if( (d-ci.getr())>0.0000001)
        return 1;//相离
    else
         if((ci.getr()-d)>0.0000001)
           return -1;//相交
         else
            return 0;//相切

}

int main()
{   
    float x1,y1,r1;
    int color1;
    cout<<"input values of a circle，x，y，r，color"<<endl;
    cin>>x1>>y1>>r1>>color1;
    Circle c1(x1,y1,r1,color1);//创建圆对象
    cout<<"面积是:"<<c1.area()<<",周长是:"<<c1.circum()<<endl;
    c1.move(1,0);//左移1
    //p->arg(4.7);
    //cout<<p->area()<<","<<p->circum()<<endl;
    Line l1(0,1,0);//创建直线对象y=0
    int m=position(c1,l1);//求出圆和直线的位置关系
    switch(m)
    {
        case 1:cout<<"相离"<<endl;break;
        case 0:cout<<"相切"<<endl;break;
        case -1:cout<<"相交"<<endl;
    }
    return 0;
}