struct stu

{char name[10];int num;};

void f(char *name,int num)

{

    struct stu s[2]={{"SunDan",20044},{"PengHua",20045}};

    num=s[0].num;

    strcpy(name,s[0].name);

}

int main()

{

    struct stu s[2]={{"YangSan",20043},{"LiSiGuo",20042}},*p;

    p=&s[1];f(p->name,p->num);

    printf("%s %d\n",p->name,p->num);

    return 0;

}