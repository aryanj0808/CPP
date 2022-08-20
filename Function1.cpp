#include<iostream>
using namespace std;
int sum(int a,int b)
{
	int s=a+b;
	return s;
};


int main ()
{
int a=45,b=54;
	cout<<"Sum="<<sum(a,b)<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl<<"b="<<b;
	return 0;
	
}


