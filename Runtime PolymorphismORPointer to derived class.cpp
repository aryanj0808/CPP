#include<iostream>
using namespace std;

class Base {


	public:
		int num1;
		void getnum() {
			cout<<"The base class number is :"<<num1<<endl;
		}
};
class Derived : public Base  {


	public:
		int num2;
		void getnum() {
			cout<<"The base class number is :"<<num1<<endl;
			cout<<"The derived class number is :"<<num2<<endl;
		}

};

int main() {
	Base *base_cls_pointer;  //Here we decleared base class pointer object
	Base obj_base1;
	Derived obj_derived1;
	base_cls_pointer = &obj_derived1;
	base_cls_pointer->num1=55;
//	base_cls_pointer->num2=45;//we can not access data or members from derived class because pointer object is from base classs

	base_cls_pointer->getnum(); // As we decleared base class pointer object here we access only base class data!

	/* lets create  pointer object from derived class */

	Derived *derived_cls_pointer;
	Base obj_base2;
	Derived obj_derived2;
	derived_cls_pointer = &obj_derived2;
	derived_cls_pointer->num1=20;
	derived_cls_pointer->num2=26;
	derived_cls_pointer->getnum();

	return 0;

}
