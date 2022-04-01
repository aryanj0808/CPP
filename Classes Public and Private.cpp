#include<iostream>
using namespace std;
class employee
{
	private:
		int a,b,c;
		
	public:
		int  d,e;
		void setdata(int x,int y,int z); //Declaration
		void getdata()
		 {
		 	cout<<"The value of a is: "<<a<<endl;
		 	cout<<"The value of b is: "<<b<<endl;
		 	cout<<"The value of c is: "<<c<<endl;
		 	cout<<"The value of d is: "<<d<<endl;
		 	cout<<"The value of e is: "<<e<<endl;
		 }
};
void employee::setdata(int x, int y, int z) //  */Define/*  Here we write data in 'setdata' fuction 
{
	a=x;
	b=y;
	c=z;
};
int main()
{    
   employee aryan;
//   aryan.a=66; //We can not access 'a' here because 'a' is belong from private class..! 
   aryan.d=23;   
   aryan.e=45;
   aryan.setdata(2,3,6); // Here we call private data
   aryan.getdata();      // Here we print private as well as public data
    
 	
	return 0;
	
}
