#include<iostream>//个人不建议使用万能头文件；可能编译出错；
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int sum[10000];//用来记录每一组数据最后的结果
int apple(int m,int n)//m是苹果数，n是盘子数 
{
    if(m==0||m==1||n==1)//边界：当苹果只有一个或者没有苹果时或者盘子只有一个时，只有一种放法，所以达到边界，返回值；
    return 1;
    if(m<n)//当苹果数少于盘子数，就只有m个盘子作用，所以接下来就计算m个苹果和m个盘子；
    return apple(m,m);
    if(m>=n)//如果苹果数大于等于盘子数，分成两个部分，一种是目前所有的盘子都放一个苹果，另一种是拿一个盘子不放；
    return apple(m-n,n)+apple(m,n-1);
}
int main()
{
    int n,m,s;//其中s是数据的个数；
    cin>>s;
    for(int i=1;i<=s;i++)
    {    
        cin>>m>>n;//m是苹果数，n是盘子数
        sum[i]=apple(m,n);//将每一组的苹果和盘子的到的结果记录在sum数组之中；
    }
    for(int j=1;j<=s;j++)
    cout<<sum[j]<<endl;//输出数据；
    return 0;
}