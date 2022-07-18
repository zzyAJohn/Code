#include "stdio.h"
char x='a';
void fun1(char x )
{
    printf("\n 3. x=%c", x);
    x='C';
    printf("\n 4. x=%c", x);
}
void fun2()
{
    printf("\n 5. x=%c\n ", x);
}
void main()
{
    char x;
    x='B';
    printf("\n 1. x=%c", x);
    fun1(x);
    printf("\n 2. x=%c", x);
    fun2();
}