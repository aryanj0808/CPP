/* Creaet 2 classes: 1. SimpleCalculator- Take input of 2 numbers using utility function and perform + , -,*,/ and display the results using 
                        another function.
                     2.ScientificCalculator-Take input of 2 numbers using utility fuction and perform any four scientific operation of your choice
					    and display the result using another fuction.
Create another class HybridCalculator and inherit it using these 2 classes;
Q1.What type of Inheritance are you using?
Q2.What mode of Inheritance are you using?
Q3.Crete an object of HybridCalculator and display results of simple and scientific calculator.
Q4.How is code resubility implemented?
*/
#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
	protected:
		
	int num1;
	int num2;
	public:
		void setnum_simple(int x, int y){
			num1=x;
			num2=y;
			}
		
		void display_simple(){
			cout<<"First Num is : "<<num1<<endl;
			cout<<"Second Num is : "<<num2<<endl;
			cout<<"Addition of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
			cout<<"Subtraction of "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
			cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
			cout<<"Division  of "<<num1<<" and "<<num2<<" is : "<<num1/num2<<endl;
		}
};
class ScientificCalculaor{
	protected:
	float num3;
	public:
		void setnum_scientific(int x){ //Value is in radian
			num3=x;
}
	void dispaly_scientific(){
	
		cout<<"The given value is :"<<num3<<endl;
		cout<<"The sine of "<<num3<<" is :"<<sin(num3)<<endl;
		cout<<"The cos of "<<num3<<" is :"<<cos(num3)<<endl;
		cout<<"The tan of "<<num3<<" is :"<<tan(num3)<<endl;
		cout<<"The cot of "<<num3<<" is :"<<1/sin(num3)<<endl;
	}
	
};

class HybridCalculator:public ScientificCalculaor ,public SimpleCalculator{

	public:
		void display(){
			display_simple();
			dispaly_scientific();
		}
};
int main(){
	 HybridCalculator aj;
	aj.setnum_simple(20,10);
	aj.setnum_scientific(30);
aj.display();
	
	return 0;
}  
