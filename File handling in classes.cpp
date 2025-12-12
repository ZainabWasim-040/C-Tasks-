#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class ABC
{
public:
    void D()
    {
        int n=10;
        char ch='A';
        ofstream file("test.txt");
        file<<n;
        file<<ch;
        file.close();
        cout<<n<<ch;
    }
};
int main()
{
    ABC obj;
	obj.D();
}

