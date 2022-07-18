#include "stdio.h"
struct NODE{ int num; struct NODE * next; };

int main ( void)

{struct NODE s [3] = {{1, '\0'},{2,'\0'},{3,'\0'}}, *p, *q, *r;

int sum= 0;

s [0]. next=s+1; s[ 1]. next=s+2; s[ 2] . next=s;

p=s; q=p->next; r =q->next ;

sum+=q->next->num; sum+= r->next ->next->num;

printf ( "%d\n", sum) ;

return 0;

}