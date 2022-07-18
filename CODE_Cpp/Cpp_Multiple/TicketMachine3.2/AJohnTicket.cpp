#include "TicketMachine.h"

int main()
{
    TicketMachine ticket;
    ticket.initialization();
    ticket.showPrompt();
    int i;
    two:
    while(1)
    {
        ticket.showOperator();//默认显示操作
        ticket.showBalance();//默认显示余额
        cin>>i;
        cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区
        cin.ignore(9999,'\n');  //用clear清除错误状态，然后再用ignore清除缓冲区。
        switch (i)
        {
            case 1:ticket.insertMoney();break;
            case 2:ticket.buyTicket();break;
            case 3:
            if(ticket.sumTicket()==0)
            {
                cout<<"您还未购买任何票据!"<<endl;
                goto two;
            }
            else
            {
                ticket.printTicket();
                goto two;
            }
            case 4:ticket.contactAJohn();goto end;
            case 5:ticket.quit();goto end;
            default:ticket.printError();goto two;
        }
    }
    end:cout<<"感谢您的使用，我们下次再见\n按任意键回车退出"<<endl;
    cin>>i;
    return 0;
}