#include <iostream>
#include "TicketMachine.h"
using namespace std;

double f1()
{
    return 5;
}

TicketMachine::TicketMachine()
{
    
}

void TicketMachine::showPrompt()
{
    cout<<"蜘蛛侠5元一张"<<endl;
    cout<<"钢铁侠10元一张"<<endl;
    cout<<"电击小子12元一张"<<endl;
    cout<<"葫芦娃20元一张"<<endl;
    cout<<"奥特曼25元一张"<<endl;
    cout<<"..."<<endl;
    cout<<"请输入数字键回车以继续..."<<endl;
    cout<<"1.充值金额"<<endl;
    cout<<"2.购买票据"<<endl;
    cout<<"3.打印票据"<<endl;
    cout<<"4.遇到问题 联系AJohn"<<endl;
    cout<<"5.退出AJohn售票机"<<endl;
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
    cout<<"你的余额是"<<balance<<endl;
}

void TicketMachine::buyTicket()
{
    cout<<"请输入你要购买票据的编号:"<<endl;
    cout<<"1.蜘蛛侠5元一张"<<endl;//a
    cout<<"2.钢铁侠10元一张"<<endl;//b
    cout<<"3.电击小子12元一张"<<endl;//c
    cout<<"4.葫芦娃20元一张"<<endl;//d
    cout<<"5.奥特曼25元一张"<<endl;//e
    cout<<"..."<<endl;
    int j;
    cin>>j;
}

void TicketMachine::printTicket()
{
    cout<<"正在打印，请耐心等待...";
    cout<<"打印成功!"<<endl;
}

void TicketMachine::contactAJohn()
{
    cout<<"QQ:1833302139"<<endl;
}

void TicketMachine::quit()
{
    cout<<"感谢您的使用"<<endl;
}