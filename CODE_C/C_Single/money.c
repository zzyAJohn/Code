#include "stdio.h"
int main()
{
    float b=0,d=0;
    for(int m=1; m<=120; m++)
    {
        b=(600000-5000*m)*0.005;
        d=d+b;
        printf("The %3d times of the repayment of interest is ￥%-7.2f ",m,b);
        printf("The principal is ￥5000\n");
    }
    printf("The total accrual is ￥%.2f\n",d);
}