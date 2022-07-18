

double f1();

class TicketMachine
{
    private:
    int balance=0;//余额
    int money=0;//支付进入的钱
    public:
    TicketMachine();
    void showPrompt();//显示售票机上的基本信息
    void insertMoney();//充值的钱
    void showBalance();//显示余额
    void printError();//错误
    void printTicket();//打印票据
    void buyTicket();
    void contactAJohn();
    void quit();
};