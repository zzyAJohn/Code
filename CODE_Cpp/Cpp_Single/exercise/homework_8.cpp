//将若干教师的信息写入文件teacher.dat中，然后读出并显示

#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Teacher
{
    char name[10];
    int num;
    int age;
    char gender[10];
};
int main()
{
    Teacher tea[5];
    ofstream outfile("teacher.dat",ios::binary);
    if(!outfile)
    {
        cout<<"open error"<<endl;
        exit(1);
    }
    for(int i=0;i<5;i++)
    cin>>tea[i].name>>tea[i].num>>tea[i].age>>tea[i].gender;
    for(int i=0;i<5;i++)
        outfile.write((char*)&tea[i],sizeof(tea[i]));
    outfile.close();
    ifstream infile("teacher.dat",ios::binary);
    if(!infile)
    {
        cout<<"open error"<<endl;
        exit(1);
    }
    Teacher tea_temp[5];
    infile.read((char*)&tea_temp[0],sizeof(tea_temp));
    infile.close();
    for(int i=0;i<5;i++)
        cout<<tea_temp[i].name<<tea_temp[i].num<<tea_temp[i].age<<tea_temp[i].gender;
}