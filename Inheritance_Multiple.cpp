#include<iostream>
using namespace std;

class base1{
	protected:
		int num1;
		public:
			void setnum1(int x){
				
				num1=x;
				}
				void getnum1(){
					cout<<"Base 1 Number is :"<<num1<<endl;
				}
	
};
class base2{
	protected:
		int num2;
		public:
			void setnum2(int x){
				
				num2=x;
				}
				void getnum2(){
					cout<<"Base 2 Number is :"<<num2<<endl;
				}
};
class derived : public base1 , public base2{
	protected:
		int num3;
		public:
			int sum(){
				getnum1();
				getnum2();
				cout<<"The sum of base1 num and base2 num :"<<num1+num2<<endl;
			}
};

int main(){
	derived aj;
	aj.setnum1(25);
	aj.setnum2(55);
	aj.sum();
	return 0;
}
