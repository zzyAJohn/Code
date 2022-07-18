//键盘输入某班若干新入学本科生信息，然后求班级学生的最高分，最低分，班级平均分和屏幕输出所有学生信息

#include <iostream>
#include <string.h>
const int N=3;
using namespace std;

class Student
{
    private:
    int num;
    char name[20];
    float score;
    public:
    Student(){}
    void set(int a,char *na,float sc)
    {
        num=a;
        strcpy(name,na);
        score=sc;
    }
    void show(){cout<<num<<","<<name<<","<<score<<endl;}
    float get_score(){return score;}
};

class Stu_mannagement
{
    private:
    Student stu[N];
    int n;
    public:
    Stu_mannagement()
    {
        n=0;
        int a;
        char b[20];
        float c;
        for(int i=0;i<N;i++)
        {
            cout<<"学号，姓名，分数:"<<endl;
            cin>>a>>b>>c;
            if(a!=0){stu[i].set(a,b,c);n++;}
            else break;
        }
    }
    float max_score()
    {
        float max=stu[0].get_score();
        for(int j=1;j<n;j++)
        {
            if(stu[j].get_score()>max)
            max=stu[j].get_score();
        }
        return max;
    }
    float min_score()
    {
        float min=stu[0].get_score();
        for(int j=1;j<n;j++)
        {
            if(stu[j].get_score()<min)
            min=stu[j].get_score();
        }
        return min;
    }
    float ave_score()
    {
        float ave=0;
        for(int i=0;i<n;i++)
        ave+=stu[i].get_score();
        return ave/n;
    }
    void show()
    {
        for(int i=0;i<N;i++)
        stu[i].show();
    }
};

int main()
{
    Stu_mannagement stum;
    stum.show();
    cout<<"max score is:"<<stum.max_score()<<endl;
    cout<<"min score is:"<<stum.min_score()<<endl;
    cout<<"ave score is:"<<stum.ave_score()<<endl;
    return 0;
}