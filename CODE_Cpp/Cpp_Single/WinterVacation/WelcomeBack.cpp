#include <iostream>
#include <string.h>
using namespace std;

class A
{
    private:
    char name[5];
    int date;
    public:
    A(){}
    void set(char *na,int da)
    {
        strcpy(name,na);
        date=da;
    }
    void out(){cout<<"welcome to back!"<<endl<<name<<endl<<"today is "<<date;}
    ~A(){}
};

int main()
{
    A a;
    a.set((char *)"AJohn",20220201);
    a.out();
    return 0;
}