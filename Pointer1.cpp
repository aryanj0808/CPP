#include<iostream>
 using namespace std;
 int main()
 {
 	int a=3;
 	int* b=&a;
 	
// 	Using Address Operator '&'

 	cout<<"Address of a:  "<<&a<<endl;
 	cout<<"Address of a:  "<<b<<endl;
 	
// 	Using Dereference Operator '*'

    cout<<"Value at b:  "<<*b<<endl;
    cout<<"Value at b:  "<<a<<endl;
 	return 0;
 }
