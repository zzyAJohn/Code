#include <iostream>
#include "TicketMachine.h"
using namespace std;

int main()
{
    TicketMachine ticket;
    int i;
    ticket.showPrompt();//默认显示信息
    ticket.showBalance();//默认显示余额 
    while(1)
    {
        cin>>i;
        switch (i)
        {
            case 1:ticket.insertMoney(); break;
            case 2:ticket.buyTicket(); break;
            case 3:ticket.printTicket(); break;
            case 4:ticket.contactAJohn();goto end;
            case 5:ticket.quit(); goto end;
        }
    }
    end:cout<<"end"<<endl;
    return 0;
}