#include<iostream>
using namespace std;
class Num
{
    protected:
	int a; 
	public:
		void Input()
		{
			cout<<"Enter a value: ";
			cin>>a;
		}
		void display()
		{
			cout<<a<<endl;
		}
};
class B:public Num
{
	protected:
		int b;
	public:
		void Input()
		{
			cout<<"Enter a value: ";
			cin>>b;
		}
	void display()
	{
		Num::Input();
		Num::display();  
		cout<<b<<endl;
	}
};
int main()
{
	B b1;
	b1.Input();
	b1.display();
}
