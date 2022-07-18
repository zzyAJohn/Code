#include <iostream>
using namespace std;

int search(int nums[],int size,int taget)
{
    int left=0;
    int right=size-1;
    while(left<=right)          //=
    {
        // int middle=(left+right)/2;    可能产生溢出
        int middle=left+(right-left)/2;
        if(nums[middle]>taget)
        right=middle-1;
        else if(nums[middle]<taget)
        left=middle+1;
        else return middle;
    }
    return -1;
}

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    cout<<search(a,7,6);
    return 0;
}