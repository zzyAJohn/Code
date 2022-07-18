#include "stdio.h"
#include "string.h"

int main()
{
    char sa[20]="SSS";
    char *sp="WASA";
    sa[0]='s';
    // strcpy(sa,sp);
    // strcpy(sp,sa);
    printf("%s",sa);
    return 0;
}
