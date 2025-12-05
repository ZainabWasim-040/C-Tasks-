#include<iostream>
template<class Type>
Type max(Type a, Type b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int main()
{
	int n;
	float f;
	n=max(10,5);
	f=max(10.5,5.5);
	std::cout<<f<<" "<<n;
}


