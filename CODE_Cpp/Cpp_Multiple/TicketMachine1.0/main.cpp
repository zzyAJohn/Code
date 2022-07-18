#include "TicketMachine.h"
#include <iostream>
using namespace std;

int main()
{
    TicketMachine tm;
    cout<<"1";
    tm.chushihua(0,0);
    tm.showPrompt();
    tm.insertMoney();
    tm.showBalance();
    return 0;
}