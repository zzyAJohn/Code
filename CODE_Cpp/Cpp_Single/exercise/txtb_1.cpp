/*设计教师类Teacher，数据成员教师号，姓名，
年龄，职称，专业，成员函数Teacher的构造，
Teacher基本信息屏幕显示函数*/

#include <iostream>
#include <string.h>
using namespace std;
const int N=3;

class Teacher
{
    private:
    int num;
    char name[10];
    int age;
    char zhiwei[10];
    char zhuanye[10];
    public:
    Teacher(){}
    void set(int a,char *b,int c,char *d,char *e)
    {
        num=a;
        strcpy(name,b);
        age=c;
        strcpy(zhiwei,d);
        strcpy(zhuanye,e);
    }
    void output(){cout<<num<<" "<<name<<" "<<age<<" "<<zhiwei<<" "<<zhuanye<<endl;}
};

class Mannagement
{
    private:
    Teacher man[N];
    public:
    Mannagement()
    {
        int a;
        char b[10];
        int c;
        char d[20];
        char e[20];
        for(int i=0;i<N;i++)
        {
            cout<<"教师号，姓名，年龄，职称，专业:"<<endl;
            cin>>a>>b>>c>>d>>e;
            if(a!=0){man[i].set(a,b,c,d,e);}
            else break;
        }
    }
    void show()
    {
        for(int i=0;i<N;i++)
        man[i].output();
    }
};

int main()
{
    Mannagement m;
    m.show();
}