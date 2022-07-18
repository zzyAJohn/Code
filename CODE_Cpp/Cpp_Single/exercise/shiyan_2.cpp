#include <iostream>
using namespace std;
const float pi=3.14;

class Shape
{
    public:
    Shape(){}
    virtual float area()=0;
};

class Sanjiao:public Shape
{
    protected:
    float a,h;
    public:
    Sanjiao(float i,float j){a=i,h=j;}
    float area(){return 0.5*a*h;}
};

class Juxing:public Sanjiao
{
    public:
    Juxing(float a,float h):Sanjiao(a,h){}
    float area(){return a*h;}
};

class Circle:public Shape
{
    private:
    float r;
    public:
    Circle(float R){r=R;}
    float area(){return pi*r*r;}
};

float total(Shape *s[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    sum+=s[i]->area();
    return sum;
}

int main()
{
    Shape *p[3];
    p[0]=new Sanjiao(2,2);
    p[1]=new Juxing(2,2);
    p[2]=new Circle(2);
    float sum=total(p,3);
    cout<<sum<<endl;
}