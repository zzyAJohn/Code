#include "stdio.h"
void main()
{
    int i,j;
    int array[10]={10,32,20,7,16,25,34,3,22,1};
    int temp;
    printf("\nThe original array is:\n");
    for(i=0;i<9;i++)
       printf("%d ",array[i]);
    for(i=0;i<9;i++)
      for(j=0;j<9-i;j++)
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    printf("\nThe sorted array is:\n");
    for(i=0;i<10;i++)
      printf("%d ",array[i]);
}