#include<iostream>
#include<fstream>
#include<cstring>
const int N=3;
using namespace std;

class Student
{
    private:
	int num;
	char name[20];
	char zhuanye[20];
    public:
	Student(int a,char *b,char *c) {num=a;strcpy(name,b); strcpy(zhuanye,c);}
	void in()
	{ 
		cout << "num,name,zhuanye:" << endl;
		cin >> num >> name >> zhuanye;
	}
	friend ostream& operator << (ostream& out, Student& stu);
	~Student(){}
};

ostream& operator << (ostream& out, Student& stu)
{
	out << stu.num << "\t" << stu.name << "\t" << stu.zhuanye << "\n";
	return out;
}

int main()
{
	fstream  ifile;
	Student *stud  = (Student*)malloc(N * sizeof(Student));
	Student *stud1 = (Student*)malloc(N * sizeof(Student));
	for (int i=0; i < N; i++)
	stud[i].in();
	cout << "初始化结束" << endl;
	fstream ofile("student.dat", ios::out | ios::binary);

	if (!ofile)
	{
		cout << "o.fail" << endl;
		exit(0);
	}

	for (int i= 0; i < N; i++)
	ofile.write((char*)&stud[i], sizeof(stud[i]));
	ofile.close();
	ifile.open("student.dat", ios::in | ios::out | ios::binary);

	if (!ifile)
	{
		cout << "i.fail" << endl;
		exit(0);
	}

	for (int i=0;i<N;i++)
	ifile.read((char*)&stud1[i], sizeof(stud1[i]));
	ifile.close();
	for (int i=0;i<N;i++)
	cout << stud1[i] ;
	return 0;
}