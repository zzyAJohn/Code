#include <iostream>
using namespace std;typedef long long ll;
int ans[222][7];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) ans[i][1] = 1;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=k;j++){
            if(i>=j) ans[i][j] = ans[i-1][j-1] + ans[i-j][j];
        }
    }
    cout<<ans[n][k]<<endl;
    return 0;
}