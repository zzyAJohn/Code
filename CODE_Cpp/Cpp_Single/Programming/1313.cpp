//在所有的N位数中，有多少个数中有偶数个数字3?由于结果可能很大，你只需要输出这个答案对12345取余的值。
#include <iostream>
using namespace std;

typedef long long ll;
ll ans[2];
int main()
{

    int n;
    cin>>n;
    if(n==1){
        cout<<9<<endl;
        return 0;
    }
    else if(n==2){
        cout<<73<<endl;
        return 0;
    }
    ans[0] = 73;
    ans[1] = 9 + 8;
    long long int flag =0;
    for(int i=3;i<=n;i++){
        flag = ans[0];
        ans[0] = (ans[0]*9 + ans[1])%12345;
        ans[1] = (ans[1]*9 + flag)%12345;
    }
    cout<<ans[0]<<endl;
    return 0;
}