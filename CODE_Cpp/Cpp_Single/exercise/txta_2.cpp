/*定义圆类Circle，数据成员圆心坐标(x,y)和半径r，
公共成员函数Circle的构造函数和求周长面积函数，
求c(-0.5,2.3,5.6)周长面积*/

#include <iostream>
using namespace std;
const float pi=3.14;

class Circle
{
    private:
    float x,y,r;
    public:
    Circle(float a,float b,float c){x=a;y=b;r=c;}
    float circum(){return 2*pi*r;}
    float area(){return pi*r*r;}
    ~Circle(){}
};

int main()
{
    Circle c(-0.5,2.3,5.6);
    cout<<"周长是:"<<c.circum()<<endl;
    cout<<"面积是:"<<c.area()<<endl;
    return 0;
}