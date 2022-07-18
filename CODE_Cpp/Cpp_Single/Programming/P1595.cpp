#include <iostream>
using namespace std;typedef long long ll;

ll ans[22];
int main(){
    int n;
    cin>>n;
    ans[1] = 0;
    ans[2] = 1;
    for(int i=3;i<=n;i++){
        ans[i] = (ans[i-1]+ans[i-2])*(i-1);
    }
    cout<<ans[n]<<endl;
    return 0;
}