#include "TicketMachine.h"

TicketMachine::TicketMachine(){}

void TicketMachine::initialization()
{
    balance=0;
    money=0;
    a=b=c=d=e=0;
}

void sleepOutput(char a[])
{
    char *p;
    p=a;
    while(*p!=0)
    {
        cout<<*p;
        p++;
        Sleep(200);
    }
}

void TicketMachine::showPrompt()
{
    sleepOutput((char *)"欢迎使用AJohn售票机!版本3.2\n");
    cout<<"蜘蛛侠\t5元一张"<<endl;
    cout<<"钢铁侠\t10元一张"<<endl;
    cout<<"汪汪队\t12元一张"<<endl;
    cout<<"葫芦娃\t20元一张"<<endl;
    cout<<"奥特曼\t25元一张"<<endl;
    cout<<"..."<<endl;
}
void TicketMachine::showOperator()
{
    cout<<"\t\t请输入数字键回车以继续..."<<endl;
    cout<<"\t\t1.充值金额\t2.购买票据\t3.打印票据\t4.遇到问题 联系AJohn\t5.退出AJohn售票机"<<endl;
}

void TicketMachine::insertMoney()
{
    cout<<"请输入充值的金额"<<endl;
    cin>>money;
    balance+=money;
    cout<<"充值成功!"<<endl;
}

void TicketMachine::showBalance()
{
    cout<<"\t\t您当前的余额是$$$:"<<balance<<endl;
}

void TicketMachine::buyTicket()
{
    cout<<"请输入你要购买票据的编号:"<<endl;
    cout<<"1.蜘蛛侠5元一张"<<endl;//a
    cout<<"2.钢铁侠10元一张"<<endl;//b
    cout<<"3.汪汪队12元一张"<<endl;//c
    cout<<"4.葫芦娃20元一张"<<endl;//d
    cout<<"5.奥特曼25元一张"<<endl;//e
    cout<<"..."<<endl;
    int j;
    cin>>j;
    cin.clear();
    cin.ignore(999,'\n');
    switch(j)
    {
        case 1:a+=panduan(5);break;
        case 2:b+=panduan(10);break;
        case 3:c+=panduan(12);break;
        case 4:d+=panduan(20);break;
        case 5:e+=panduan(25);break;
        default:printError();
    }
}

int TicketMachine::panduan(int price)
{
    int k;
    cout<<"请输入数量:"<<endl;
    cin>>k;
    if(balance>=price*k)
    {
        cout<<"购买成功!"<<endl;
        balance-=price*k;
        return k;
    }
    else cout<<"余额不足!请按1充值!"<<endl;
    return 0;
}

void TicketMachine::printTicket()
{
    cout<<"你当前拥有:"<<endl;
    cout<<"1.蜘蛛侠"<<a<<"张"<<endl;//a
    cout<<"2.钢铁侠"<<b<<"张"<<endl;//b
    cout<<"3.汪汪队"<<c<<"张"<<endl;//c
    cout<<"4.葫芦娃"<<d<<"张"<<endl;//d
    cout<<"5.奥特曼"<<e<<"张"<<endl;//e
    cout<<"共"<<a+b+c+d+e<<"张"<<endl;
    sleepOutput((char *)"正在打印，请耐心等待...");
    cout<<"打印成功!"<<endl;
}

void TicketMachine::contactAJohn()
{
    cout<<"QQ:1833302139\n很抱歉给您的使用带来困扰，请和我反馈bug!"<<endl;
}

void TicketMachine::quit()
{
    sleepOutput((char *)"正在退出...");
}

int TicketMachine::sumTicket()
{
    return a+b+c+d+e;
}

void TicketMachine::printError()
{
    cout<<"Error!!!"<<endl;
}