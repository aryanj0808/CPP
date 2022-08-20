#include<iostream>
using namespace std;

/*****Structre*********/

union employee
{
	int id;
	char c;
	float salary;
	
};
int main()
{
   union employee aryan;
//   aryan.id = 1;
   aryan.c = 'j';
//   aryan.salary= 2500000;   
   
//cout<<"id="<<aryan.id<<endl;
cout<<"charater="<<aryan.c<<endl;
//cout<<"salary="<<aryan.salary<<endl;


	/* NOTE : Here we can only use  data type if we used multi data type we get 
	  garbage value but we get accurate value of last data type*/
	  
	  
	  
	  /*********** Enum ************/
	  
	  enum names { sharvan, satish, jadhav};
	  cout<<sharvan<<endl;
	  cout<<satish<<endl;
	  cout<<jadhav<<endl;
	  
	  
	  
	  
	return 0;
	
}
