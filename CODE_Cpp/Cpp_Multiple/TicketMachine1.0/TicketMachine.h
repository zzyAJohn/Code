class TicketMachine
{
    private:
    const int PRICE;
    int balance;//余额
    int money;//支付进入的钱
    public:
    TicketMachine();
    void chushihua(int balance,int money);
    void showPrompt();//显示信息
    void insertMoney();//塞入的钱
    void showBalance();//显示余额
    void printError();
    void printTicket();
    ~TicketMachine();
};