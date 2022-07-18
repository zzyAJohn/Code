//高考改革等级赋分变

#include "stdio.h"

void change(int x,int n,int m,int x1,int x2)
{
    int now;
    now=(n*x2+m*x1)/(m+n);
    printf("%d\t%d\n",x,now);
}

int main()
{
    int k,i,j,t,x1,x2;
    printf("请输入总人数:");
    scanf("%d",&k);
    int f[k];
    int a,b,c,d,e,A,B,C,D,E;//原始最低最高
    int aa,bb,cc,dd,ee;//数量
    printf("请输入10组成绩:");
    for(i=0;i<k;i++)
    scanf("%d",&f[i]);
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(f[i]<f[j])
            {
                t=f[i];
                f[i]=f[j];
                f[j]=t;
            }
        }
    }
    aa=0.15*k+0.5;
    bb=0.35*k+0.5;
    cc=0.35*k+0.5;
    dd=0.13*k+0.5;
    ee=0.02*k+0.5;
    if(aa+bb+cc+dd+ee>k)bb--;
    A=f[0],a=f[aa-1];
    B=f[aa],b=f[aa+bb-1];
    C=f[aa+bb],c=f[aa+bb+cc-1];
    D=f[aa+bb+cc],d=f[aa+bb+cc+dd-1];
    E=f[aa+bb+cc+dd],e=f[aa+bb+cc+dd+ee-1];
    printf("原始分\t等级转换分\n");
    for(i=0;i<k;i++)
    {
        if(f[i]>=a&&f[i]<=A){x1=86,x2=100;change(f[i],f[i]-a,A-f[i],x1,x2);}
        else if(f[i]>=b&&f[i]<=B){x1=71,x2=85;change(f[i],f[i]-b,B-f[i],x1,x2);}
        else if(f[i]>=c&&f[i]<=C){x1=56,x2=70;change(f[i],f[i]-c,C-f[i],x1,x2);}
        else if(f[i]>=d&&f[i]<=D){x1=41,x2=55;change(f[i],f[i]-d,D-f[i],x1,x2);}
        else if(f[i]>=e&&f[i]<=E){x1=30,x2=40;change(f[i],f[i]-e,E-f[i],x1,x2);}
        else printf("空!");
    }
    return 0;
}