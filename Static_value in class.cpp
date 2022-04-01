#include<iostream>
using namespace std;
class employee 
{
	static int count;
	int id;
	public:
		void setdata(){
			cout<<"Enter the id: "<<endl;
			cin>>id;
			count++;
		}
		void getdata(){
			cout<<"The id of emp is : "<<id<<endl<<"This is employee No. : "<<count<<endl;
		}
		
};

int employee :: count; // Default value is 0.
int main()
{
	employee aryan,rushi,pashya;
	
	aryan.setdata();
	aryan.getdata();
	
	rushi.setdata();
	rushi.getdata();
	
	pashya.setdata();
	pashya.getdata();
	
	
	
	return 0;
	
}
