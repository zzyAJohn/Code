/*输出所有形如aabb的四位完全平方数（即前两位数字相等，后两位数字也相等）。
由小到大输出，每个数占一行。*/

#include "stdio.h"
#include "math.h"

int main()
{
    int a,b;
    for(a=1;a<=9;a++)
    for(b=0;b<=9;b++)
    {
        int k=a*1100+b*11;
        int x=sqrt(k);
        if(k/1000==k%1000/100&&k%100/10==k%10&&x*x==k)
        printf("%d%d%d%d\n",a,a,b,b);
    }
    return 0;
}