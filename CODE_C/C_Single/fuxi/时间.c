#include <stdio.h>

int main()
{
    int hour=0, mins=0, s=0, n=0;
    scanf("%d:%d:%d", &hour, &mins, &s);
    scanf("%d", &n);
    if (s + n >= 60)
    {
        s = s + n - 60;
        mins++;
    }
    if ( mins >= 60)
    {
        mins -= 60;
        hour++;
    }
    if ( hour >= 24)
    {
        hour -= 24;
    }
    printf("%02d:%02d:%02d", hour, mins, s);
    return 0;
}