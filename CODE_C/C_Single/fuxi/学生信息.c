#include <stdio.h>
int main()
{
    int n,i;
    float average,total=0;
    struct student
    {
        int num;
        char name;
        int grade;
    };
    struct student students[10];
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        scanf("%d %s %d",&students[i].num,&students[i].name,&students[i].grade);
        total=total+students[i].grade;
    }
    average=total/n;
    printf("%.2f",average);
}