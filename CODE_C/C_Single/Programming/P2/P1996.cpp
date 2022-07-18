#include<iostream>
#include<cstdio>
using namespace std;
int m,n,k,a[1009];
int main()
{
    cin>>m>>n>>k;//输入 PS：我把n，m打反了，大家凑合着看-_-||
    for(int i=0;i<m;i++)
        a[i]=i+1;//建立一个模拟链表
    int p=0;//起始点
    for (;m>0;--m)//开始杀人(´⊙ω⊙`)
    {
        p=(p+n%m-1+m)%m;//找出倒霉的那个人的位置，也是核心公式，其作用稍后解释
        cout<<a[p]<<(m==1?'\n':' ');//手起刀落_(:з」∠)_PS：三目运算符最可爱qwq
        copy(a+p+1,a+m,a+p);//(O_O)?
    }
    return 0;//ヽ(*^ｰ^)人(^ｰ^*)ノ
}