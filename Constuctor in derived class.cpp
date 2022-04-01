#include<iostream>
using namespace std;
class base1{
	int num1;
	public:
		base1(int a){
			num1=a;
			cout<<"Base1 constructor is called"<<endl;
		}
		void getnum1(){
			cout<<"The value of base1 is: "<<num1<<endl;
		}
};
class base2{
	int num2;
	public:
		 base2(int b){
			num2=b;
			cout<<"Base2 constructor is called"<<endl;
		}
		void getnum2(){
			cout<<"The value of base2 is: "<<num2<<endl;
		}
};
class derived : public base1 ,public base2{
	int num3,num4;
	public:
	 derived(int a,int b,int c,int d) : base1(a),base2(b){
			num3=c;
			num4=d;
			cout<<"Derived class constructor is called"<<endl;
		}
		void getnum(){
//			getnum1();
//            getnum2();
			cout<<"The value of Derived num3 is :"<<num3<<endl;
			cout<<"The value of Derived num4 is :"<<num4<<endl;
		}
	void getalldata(){
		 getnum1();
		 getnum2();
		 getnum();
	}
};
int main(){
derived aj(2,4,6,8);
aj.getalldata();
//aj.getnum1();
//aj.getnum2();
//aj.getnum();
	
	return 0;
}
