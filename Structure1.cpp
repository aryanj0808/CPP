#include<iostream>
using namespace std;

/*****Structre*********/

struct employee
{
	int id;
	char c;
	float salary;
	
};
int main()
{
   struct employee aryan;
   aryan.id = 1;
   aryan.c = 'j';
   aryan.salary= 2500000;   
   
cout<<"id="<<aryan.id<<endl;
cout<<"charater="<<aryan.c<<endl;
cout<<"salary="<<aryan.salary<<endl;


	
	
	return 0;
	
}
