#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    scanf("%d", &n);
    dectobin(n);
    return 0;
}
/* 你的代码将被嵌在这里 */
void dectobin (int n)
{
	int a;
	a = n % 2;
	if (n<2)
	{
		printf("%d", a);
	}
	else
	{
		n = n / 2;
		dectobin(n);
		printf("%d", a);
	}
}