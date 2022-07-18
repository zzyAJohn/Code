#include "stdio.h"
struct book
{
    int age;
    int money;
};

int main()
{
    struct book a={18,200};
    printf("%d%d",a.age,a.money);
}