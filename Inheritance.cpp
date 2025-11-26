#include<iostream>
using namespace std;
class Move
{
	protected:
		int Position;
	public:
		Move()
		{
			Position=0;
		}
		void forward()
		{
			Position++;
		}
		void display()
		{
			cout<<Position;
			cout<<endl;
		}
};
class Move2:public Move
{
	public:
		void backward()
		{
			Position--;
		}
};
int main()
{
	Move2 m;
	m.display();
	m.forward();
	m.display();
	m.backward();
	m.display();
}
