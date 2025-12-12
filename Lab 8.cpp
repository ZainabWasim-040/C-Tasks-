#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
    protected:
	int Roll_No;
	string Name;
	public:
	void in()
	{
		cout<<"Enter your Name: ";
		cin>>Name;
		cout<<"Enter your Roll number: ";
		cin>>Roll_No;
	}	
	void out()
	{
		cout<<"Your Name= "<<Name<<endl;
		cout<<"Your Roll Number= "<<Roll_No<<endl;
	}
};
class Teacher: public Student
{
	protected:
		int id;
		string Name;
	public:
		void input()
		{
			Student::in();
			cout<<"Enter Teacher's Name: ";
		    cin>>Name;
			cout<<"Enter Teacher's ID: ";
			cin>>id;
		}
		void output()
	{
		Student::out();
		cout<<"Teacher's Name= "<<Name<<endl;
		cout<<"Teacher's ID= "<<id<<endl;
	}
};
class University:public Teacher
{
	protected:
		int password;
	public:
		void I()
		{
			Teacher::input();
			cout<<"Enter university Password: ";
		    cin>>password;
		}
		void O()
	{
		Teacher::output();
		cout<<"University Password= "<<password<<endl;
	}
};
int main()
{
	University U;
	U.I();
	U.O();
}
