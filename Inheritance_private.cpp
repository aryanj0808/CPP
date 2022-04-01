#include<iostream>
using namespace std;
class base{
	int num1;
	public:
		int num2;
	void setdata();
	int	getnum1();
	int	getnum2();
};
void base :: setdata(void){
	num1 = 30;
	num2 = 20;
	
}
int base :: getnum1(){
	return num1;
}
int base :: getnum2(){
	return num2;
}

class derived : private base{ //Here visibility is private so we can not access class base data directly in main fuction using class derived 
	public:
		int num3;
		int operation();
		int display();
};
int derived :: operation(){
    setdata();//////////////////////////We have to decleared all member function of base function  somewhere in derived class             
	num3 = num2*getnum1();	          //base class fuction getnum1() and data num2 
}
int derived :: display(){
	cout<<"Num 1 ="<<getnum1()<<endl;
	cout<<"Num 2 ="<<num2<<endl;
	cout<<"Num 3 ="<<num3<<endl;
	
}
int main(){
	derived data;
	//data.setnum(); //we can not call member fuction of class base in main function when visibility is private 
	data.operation();
	data.display();
	
	return 0;
}
