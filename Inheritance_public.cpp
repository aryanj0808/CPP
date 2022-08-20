#include<iostream>
using namespace std;
class base{
	int num1; //private by default and is not inheriable
	public:
		int num2;
	void setdata();
	int	getnum1();//here we display or convert privte member into public.
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

class derived : public base{  //here visibility is public therefore  data from class base 
                              //is public that mean we can access that that data in main fuction 
	public:
		int num3;
		int operation();
		int display();
};
int derived :: operation(){
	num3 = num2*getnum1();	
}
int derived :: display(){
	cout<<"Num 1 ="<<getnum1()<<endl;
	cout<<"Num 2 ="<<num2<<endl;
	cout<<"Num 3 ="<<num3<<endl;
	
}
int main(){
	derived data;
	data.setdata(); // this data is from base class and here we display derived class and his object  
	               //but we can access it because visibility is public.
	data.operation();
	data.display();
	
	return 0;
}
