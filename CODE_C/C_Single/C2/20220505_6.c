struct S{int n;int a[20];} ;

void f(int *a,int n)

{

    int i;

    for(i=0;i<n-1;i++)

        a[i]=a[i]+i;

}

int main()

{

    int i;

    struct S s={10,{2,3,1,6,8,7,5,4,10,9}};

    f(s.a,s.n);

    for(i=0;i<s.n;i++)

        printf("%d,",s.a[i]);

    return 0;

}

