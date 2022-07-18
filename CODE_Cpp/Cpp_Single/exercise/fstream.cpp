#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
int main()
{
    ofstream myf("C:\\Users\\AJohn\\Desktop\\myabc.txt");
    char txt[5];
    while(1)
    {
        cin.getline(txt,5);          //大于等于5个程序结束，只录入4个,空格算一个字符
        if(strlen(txt)==0)
        break;
        myf<<txt<<endl;
    }
    return 0;
}
*/
int main()
{
    ofstream myf("C:\\Users\\AJohn\\Desktop\\myabc.txt",ios::ate);
    char txt[5];
    while(1)
    {
        cin.getline(txt,5);          //大于等于5个程序结束，只录入4个,空格算一个字符
        if(strlen(txt)==0)
        break;
        myf<<txt<<endl;
    }
    return 0;
}