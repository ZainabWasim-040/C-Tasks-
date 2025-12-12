#include<iostream>
#include<conio.h>
using namespace std;
class Rose
{
	protected:
		int Roses;
	public:
		void R()
		{
			cout<<"Enter number of Roses: ";
			cin>>Roses;
		}
		void show()
		{
			cout<<"Roses= "<<Roses<<endl;
		}
};
class Jasmine
{
	protected:
		int Jasmine;
	public:
		void J()
		{
			cout<<"Enter number of Jasmines: ";
			cin>>Jasmine;
		}
		void display()
		{
			cout<<"Jasmine= "<<Jasmine<<endl;
		}
};
class Flowers:public Rose, public Jasmine
{
	protected:
		int Total;
	public:
		Flowers()
		{
			Total=0;
		}
		void total()
		{
			Rose::R();
			Jasmine::J();
			Total=Roses+Jasmine;
		}
		void out()
		{
			Rose::show();
			Jasmine::display();
			cout<<"Total Flowers= "<<Total<<endl;
		}
};
int main()
{
	Flowers F;
	F.total();
	F.out();
}
