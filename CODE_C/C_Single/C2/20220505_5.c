struct STU{

char name[10];int num;

};

void f1(struct STU c)

{

struct STU b={"Three",2042};

c=b;

}

void f2(struct STU *c)

{

struct STU b={"Two",2044};

*c=b;

}

int main(void)

{

struct STU a={"One",2041},b={"Two",2043};

f1(a);f2(&b);

printf("%d %d\n",a.num,b.num);

return 0;

}