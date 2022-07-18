#include <iostream>
using namespace std;

void QuickSort(int *arr,int begain,int end)
{
    if(begain>end)
    return;
    int i=begain;
    int j=end;
    int tem=arr[begain];
    while(i!=j)
    {
        while(i<j&&arr[j]>=tem)
        j--;
        while(i<j&&arr[i]<=tem)
        i++;
        if(i<j)
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    arr[begain]=arr[i];
    arr[i]=tem;
    QuickSort(arr,begain,i-1);
    QuickSort(arr,i+1,end);
}

int main()
{
    int a[7]={8,9,5,3,2,4,7};
    QuickSort(a,0,6);
    for(int i=0;i<7;i++)
    cout<<a[i];
    return 0;
}