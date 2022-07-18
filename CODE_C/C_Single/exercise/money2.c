#include "stdio.h"
int main()
{
    float b=0,d=0,c=16388.89;                   //a期数，b月供，c月供本金，d月供利息，e本月余额
    int a=1;
    double e,B=0,D=0;
    printf("期数\t\t月供\t\t\t月供本金\t\t月供利息\t本月余额\n");
    for(int m=0; m<36; m++,a++)
    {
        printf("%d\t\t",a);
        d=(590000-c*m)*0.003875;
        b=c+d;
        e=590000-c*a;
        printf("%.2f\t\t%.2f\t\t%-7.2f\t\t%-7.2f\n",b,c,d,e);
        B+=b;
        D+=d;
    }
    printf("合计\t\t%.2f\t\t%.2f\t\t%.2f",B,c,D);
}