#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	string paragraph;
	ofstream file("paragraph.txt");
	file<<"This code explains file handling by reading and writing a file. This program also counts total number of vowels.";
	file.close();
	
	ifstream File("paragraph.txt");
	getline(File,paragraph);
	File.close();
	
	int Vowel=0;
	for(int i=0;i<paragraph.length();i++)
	{
		char c=paragraph[i];
		if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		Vowel++;
	}
	cout<<"Paragraph= "<<paragraph<<endl;
	cout<<"Vowel count= "<<Vowel<<endl;
	getch();
}

