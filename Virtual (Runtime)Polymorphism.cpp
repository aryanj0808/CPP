#include<iostream>
using namespace std;

class Base {


	public:
	int num1=56;
	virtual                    //Here we decleared Virtual function
		void getnum() {   
			cout<<"The base class number is :"<<num1<<endl;
		}
};
class Derived : public Base  {


	public:
		 int num2=45;
		void getnum() {
			cout<<"The base class number is :"<<num1<<endl;
			cout<<"The derived class number is :"<<num2<<endl;
		}

};

int main() {
	Base *base_cls_pointer;  //Here we decleared base class pointer object
	Base obj_base1;
	Derived obj_derived1;
	base_cls_pointer = &obj_derived1; //here derived class obbject asign to base pointer object  

	base_cls_pointer->getnum(); /*As virtual fuction is decleard to getnum() which is member of base function 
	                            So we can access data from derived class which is assign to base object pointer*/
	return 0;

}
