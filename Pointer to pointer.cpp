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
    
//    Pointer to pointer Value using '**'
    int** c=&b;
      cout<<"Address of b:  "<<c<<endl;
      cout<<"Value at c:  "<<*c<<endl;
 	return 0;
 }
