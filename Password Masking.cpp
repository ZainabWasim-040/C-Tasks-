#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Password_masking 
{
private:
    char Password[50];
    char adminPassword[50];
    int length;
public:
    Password_masking() 
	{
        Password[0]='\0';
        length=0;
    }
    void Password_Masking() 
	{
        length=0;
        char ch;
        cout<<"Enter your password: ";
        while(true) 
		{
            ch=getch();
            if(ch==13)   
                break;
            if(ch==8) 
			{  
                if(length>0) 
				{
                    length--;
                    cout<<"\b \b";
                }
            }
            else 
			{          
                Password[length]=ch;
                length++;
                cout << "*";
            }
        }
        Password[length]='\0';
        cout<<"\nPassword: "<<Password<<endl;
        bool lowercase=false, uppercase=false, digit= false, special_ch= false;
        for(int i=0;i<length;i++)
		 {
            if(Password[i]>='a'&&Password[i]<='z')
			lowercase=true;
            else if(Password[i]>='A'&&Password[i]<='Z') 
			uppercase=true;
            else if(Password[i]>='0'&&Password[i]<='9') 
			digit=true;
            else 
			special_ch=true;
        }
        cout<<"Password Strength: ";
        if(lowercase&&uppercase&&digit&&special_ch&&length>=8)
            cout<<"Password is Strong"<<endl;
        else if((lowercase||uppercase)&&digit&&length>=6)
            cout<<"Password is Moderate"<<endl;
        else
            cout<<"Password is Weak"<<endl;
    }
};
int main() 
{
    Password_masking P;
    P.Password_Masking();
    return 0;
}

