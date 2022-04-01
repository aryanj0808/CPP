#include<iostream>
using namespace std;
int sum(int a, int b)
{
	cout<<"using fuction with 2 argument"<<endl;
	return a+b;
};
int sum(int a,int b, int c)
{
	cout<<"using fuction with 3 argument"<<endl;
	return a+b+c;
};
int main()
{   
	int x,y,z;
	cout<<"Enter any three Numbers"<<endl;
    cin>>x>>y>>z;
	 
	 cout<<"The sum Of 2 arg="<<sum(x,y)<<endl;
	 cout<<"The sum Of 3 arg="<<sum(x,y,z)<<endl;
	 
	
	return 0;
}

