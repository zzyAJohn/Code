#include "TicketMachine.h"
#include <iostream>
using namespace std;


void TicketMachine::showPrompt()
{
    cout<<"卡布基诺5元一杯";
}

void TicketMachine::insertMoney()
{
    cout<<"请输入支付的金额"<<endl;
    cin>>money;
    balance+=money;
}

void TicketMachine::showBalance()
{
    cout<<"你的余额是"<<balance<<endl;
}