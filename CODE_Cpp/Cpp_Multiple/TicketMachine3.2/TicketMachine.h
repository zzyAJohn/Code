#include <iostream>
#include "windows.h"
using namespace std;

double f1();

class TicketMachine
{
    private:
    //const int PRICE;
    int balance;//余额
    int money;//支付进入的钱
    int a,b,c,d,e;
    public:
    TicketMachine();
    void initialization();//初始化
    void showPrompt();//显示售票机上的基本信息
    void showOperator();//显示操作
    void insertMoney();//充值的钱
    void showBalance();//显示余额
    void printError();//错误
    void printTicket();//打印票据
    void buyTicket();//买票
    void contactAJohn();//联系AJohn
    int sumTicket();//票数总和
    void viewOrder();//查看订单**未做
    void quit();
    int panduan(int price);//判断余额是否够支付
};