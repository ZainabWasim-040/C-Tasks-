#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	int n=10;
	char ch='A';
	ofstream file("test.txt");
	file<<n;
	cout<<n;
	file<<ch;
	cout<<ch;
	file.close();
}

