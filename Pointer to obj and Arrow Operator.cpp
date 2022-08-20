#include<iostream>
using namespace std;

class  Data{
int num1;
int num2;
public:
	 void setdata(int a, int b){
	 	num1=a;
	 	num2=b;
	 }
	 
	 void getdata(){
	 	
	 	cout<<"Value of Num1 = "<<num1<<endl;
	 	cout<<"Value of Num2 = "<<num2<<endl;
	 }
};
int main(){
 Data aj;               //Here we created a normal way class object
 aj.setdata(4,50);
 aj.getdata();
	
	Data *pointer = &aj; //Here we created pointer to object 
	(*pointer).setdata(45,560);
	(*pointer).getdata();
	
	Data *Pointer = new Data; //Here also we created pointer to object 
	Pointer->setdata(22,44); //Here we used Arrow Operator
	Pointer->getdata();
	
	return 0;
}
