#include <iostream>
#include <cstdio>
using namespace std;

class Bank
{
private:
    int balance=0;//余额
    int money;//钱数
public:
    Bank(){};
    ~Bank(){};
    char name[10];
    void InPut();//存钱
    void OutPut();//取钱
};






void Bank::InPut()
{
    cout<<"请输入存钱金额";
    cin>>money;
    balance+=money;
    cout<<"你现在的余额是："<<balance<<endl;
}

void Bank::OutPut()
{
    cout<<"请输入取钱金额：";
    cin>>money;
    if(balance>=money)
    balance-=money;
    else cout<<"你的余额不足！"<<endl;
    cout<<"你现在的余额是："<<balance<<endl;
}
·
int main()
{
    // char name[10];
    int i=1;
    int p;
    Bank A;
    cout<<"请输入用户名：";
    cin>>A.name;
    cout<<"欢迎你，"<<A.name<<endl;
    while(i)
    {
    cout<<"1.存钱\t2.取钱3.退卡\t"<<endl;
    cin>>p;
    switch (p)
    {
    case 1:A.InPut();
        break;
    case 2:A.OutPut();
        break;
    case 3:i=0;
        break;
    }
    }
    cout<<"确认退卡？确认请按886"<<endl;
    cin>>i;
    if(i==886) cout<<"goodbye!"<<endl;
    else cout<<"输入错误"<<endl;
}