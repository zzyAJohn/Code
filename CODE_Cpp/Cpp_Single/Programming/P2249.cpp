#include <bits/stdc++.h>
using namespace std;

int search(int nums[],int size,int taget)
{
    int left=0;
    int right=size-1;
    while(left<right)
    {
        int middle=left+(right-left)/2;
        if(nums[middle]>=taget)
        right=middle;
        else if(nums[middle]<taget)
        left=middle+1;
    }
    if(nums[left]==taget)
    return left+1;
    else return -1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int s[m];
    for(int i=0;i<m;i++)
    cin>>s[i];
    for(int i=0;i<m;i++)
    cout<<search(arr,n,s[i])<<" ";
    return 0;
}