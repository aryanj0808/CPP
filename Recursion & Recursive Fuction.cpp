#include<iostream>
using namespace std;
 /****************Recursion Fuction*******/
int fact(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n* fact(n-1);  /* We call Fact fuction Again*/
}
};

int main()

{   

 int a;
 cout<<"Enter a Number"<<endl;
 cin>>a;
 cout<<"factorial of "<<a<<" is "<<fact(a);
    
	
	return 0;
	
}
