#include<iostream>
using namespace std;
class A
{
public:
   int x=10;
};
class B:virtual public A 
{
	public:
	void display()
	{
	cout<<"Child Class B"<<endl;
    }
};
class C:virtual public A 
{
	public:
	void display()
	{
	cout<<"Child Class C"<<endl;
    }
};
class D:public B,public C 
{
	public:
	void show()
	{
	cout<<"Child Class D"<<endl;
    }
};
int main() 
{
    D obj;
    obj.show(); 
    cout<<obj.x;
}

