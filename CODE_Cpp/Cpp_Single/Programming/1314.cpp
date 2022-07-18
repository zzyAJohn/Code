#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
ll ans[25][25];
int n,m,x,y;

bool is_control_point(int i,int j){
    if(i==x&&j==y) return true;
    if(i==x+2&&j==y+1) return true;
    if(i==x+1&&j==y+2) return true;
    if(i==x-1&&j==y+2) return true;
    if(i==x-2&&j==y+1) return true;
    if(i==x-2&&j==y-1) return true;
    if(i==x-1&&j==y-2) return true;
    if(i==x+1&&j==y-2) return true;
    if(i==x+2&&j==y-1) return true;
    return false;
}

int main()
{
    cin>>n>>m>>x>>y;
    if(n==0&&m==0){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<25;i++){
        ans[i][0] =1;
        ans[0][i] =1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(is_control_point(i,j)){
                ans[i][j] = 0;
            }
            else if(i==0&&j==0){
                ans[0][0] = 1;
            }
            else if(i==0){
               ans[0][j] = ans[0][j-1];
            }
            else if(j==0){
                ans[i][0] = ans[i-1][0];
            }
            else{
                ans[i][j] = ans[i-1][j] + ans[i][j-1];
            }
        }
    }
    cout<<ans[n][m]<<endl;
    return 0;
}