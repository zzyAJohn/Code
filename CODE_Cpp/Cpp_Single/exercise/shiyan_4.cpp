#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
const int N=5;

struct Student
{
    int num;
    char name[20];
    int age;
    float score;
};

int main()
{
    Student stu[N],stu1;


    ofstream outfile("stud.dat",ios::binary);
    if(!outfile)
    {
        cout<<"file open error!"<<endl;
        exit(1);
    }
    cout<<"please input date of 5 stydents"<<endl;
    for(int i=0;i<N;i++)
    cin>>stu[i].num>>stu[i].name>>stu[i].age>>stu[i].score;
    outfile.write((char *)stu,sizeof(stu));
    outfile.close();
    Student stu_temp[N];


    ifstream infile("stud.dat",ios::binary);
    if(!infile)
    {
        cout<<"file open error!"<<endl;
        exit(1);
    }
    infile.read((char *)stu_temp,sizeof(stu_temp));
    infile.close();
    for(int i=0;i<N;i++)
    cout<<stu_temp[i].num<<" "<<stu_temp[i].name<<" "<<stu_temp[i].age<<" "<<stu_temp[i].score<<endl;


    fstream iofile("stud.dat",ios::in|ios::out|ios::binary);
    iofile.seekg(3*sizeof(Student),ios::beg);
    iofile.read((char *)&stu1,sizeof(stu1));
    cout<<stu1.num<<" "<<stu1.name<<" "<<stu1.age<<" "<<stu1.score<<endl;
    cout<<"please input updated date of student"<<endl;
    cin>>stu1.num>>stu1.name>>stu1.age>>stu1.score;
    iofile.seekp(3*sizeof(stu1),ios::beg);
    iofile.write((char *)&stu1,sizeof(stu1));
    iofile.close();
    
    iofile.open("stud.dat",ios::in|ios::binary);
    iofile.read((char *)stu_temp,sizeof(stu_temp));
    iofile.close();
    cout<<"updated date of student is:"<<endl;
    for(int i=0;i<N;i++)
    cout<<stu_temp[i].num<<" "<<stu_temp[i].name<<" "<<stu_temp[i].age<<" "<<stu_temp[i].score<<endl;
    return 0;
}