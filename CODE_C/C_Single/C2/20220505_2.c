struct stu

{int num;char name[9];int age;};

void f(struct stu *p)

{

    printf("%s\n",(*p).name);

}

int main()

{

    struct stu students[3]={{9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};

    f(students+2);

    return 0;

}