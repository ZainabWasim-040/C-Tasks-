#include<iostream>
using namespace std;
class Staff
{
	int a;
	public:
		Staff(int p)
		{
			a=p;
		}
		void show()
		{
			cout<<"Value of a"<<a;
		}
};
class Helper:public Staff
{
	char b;
	public:
		Helper(char x, int y): Staff(y)
		{
			b='x';
		}
	void show()
	{
		Staff::show();
		cout<<b;
	}
};
int main()
{
	Helper h1('A',6);
	h1.show();
	
}
