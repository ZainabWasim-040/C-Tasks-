#include<iostream>
using namespace std;
class Test
{
	private:
	int n;
    public:
    void input()
    {
        cout<<"Enter any number: ";
        cin>>n;
    }
    void show()
    {
        cout<<"Value of n is:"<<n<<endl;
	}
};
int main()
{
    Test *ptr;
    ptr = new Test[7]; 
    for(int i=0;i<7;i++)
        ptr[i].input();
    for(int i=0;i<7;i++)
        ptr[i].show();
    return 0;
}

