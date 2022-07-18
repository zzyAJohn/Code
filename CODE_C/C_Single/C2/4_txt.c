//高考改革等级赋分

#include "stdio.h"

int main()
{
    int x1,x2,x,f1,f2,f,n,m;
    int a,b,c,d,e,A,B,C,D,E;
    printf("请输入A区间最低和最高分:");
    scanf("%d%d",&a,&A);
    printf("请输入B区间最低和最高分:");
    scanf("%d%d",&b,&B);
    printf("请输入C区间最低和最高分:");
    scanf("%d%d",&c,&C);
    printf("请输入D区间最低和最高分:");
    scanf("%d%d",&d,&D);
    printf("请输入E区间最低和最高分:");
    scanf("%d%d",&e,&E);
    printf("请输入学生成绩:");
    scanf("%d",&f);
    if(f>=a&&f<=A){f1=a,f2=A,x1=86,x2=100;}
    else if(f>=b&&f<=B){f1=b,f2=B,x1=71,x2=85;}
    else if(f>=c&&f<=C){f1=c,f2=C,x1=56,x2=70;}
    else if(f>=d&&f<=D){f1=d,f2=D,x1=41,x2=55;}
    else if(f>=e&&f<=E){f1=e,f2=E,x1=30,x2=40;}
    else printf("没有所在区间!");
    n=f-f1,m=f2-f;
    x=(n*x2+m*x1)/(m+n);
    printf("转换成绩为:%d",x);
    return 0;
}