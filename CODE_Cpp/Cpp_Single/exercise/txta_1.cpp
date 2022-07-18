//定义日期类Date，数据成员年月日，公共成员函数Date构造函数，信息显示函数

#include <iostream>
using namespace std;

class Date
{
    private:
    int year,month,day;
    public:
    Date(int a,int b,int c){year=a;month=b;day=c;}
    void output(){cout<<"你输入的是"<<year<<"年"<<month<<"月"<<day<<"日"<<endl;}
    ~Date(){}
};

int main()
{
    int y,m,d;
    cout<<"请输入年月日"<<endl;
    cin>>y>>m>>d;
    Date date(y,m,d);
    date.output();
    return 0;
}