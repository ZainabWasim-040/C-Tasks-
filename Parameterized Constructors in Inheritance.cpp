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
		Move(int P)
		{
			Position=P;
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
		Move2(int P):Move(P){}
		void backward()
		{
			Position--;
		}
};
int main()
{
	Move2 m(10);
	m.display();
	m.forward();
	m.display();
	m.backward();
	m.display();
}
