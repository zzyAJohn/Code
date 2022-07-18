typedef struct S

{char name[9];char sex;float score[2];} STU;

void f(STU a)

{

    STU b={"zhao",'m',85.0,90.0};

    int i;

    strcpy(a.name,b.name);

    a.sex=b.sex;

    for(i=0;i<2;i++)

        a.score[i]=b.score[i];

}

int main()

{

    STU c={"Qian",'f',95.0,92.0};

    f(c);

    printf("%s,%c,%2.0f,%2.0f\n",c.name,c.sex,c.score[0],c.score[1]);

    return 0;

}