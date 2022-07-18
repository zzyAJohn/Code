//家庭账户的共享

#include<iostream>
#include<string.h>
using namespace std;
class member
{
private:
    char membername[20];
public:
    static float account;//静态数据成员
    member(char *name)//构造函数
    {
        strcpy(membername,name);
    }
    static void save(float money)
    {
        account=account+money;
    }
    static void pay(float money)
    {
        account=account-money;
    }
    static void show()
    {
        cout<<account<<endl;
    }
};
float member::account=500;//用static关键字修饰，在类中声明之后还需要在类外进行定义。
int main()
{
    member cui((char *)"xiaocui"),liu((char *)"xiaoliu");
    cui.save(100);
    liu.pay(200);
    cui.show();
    liu.show();
}