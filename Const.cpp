#include<iostream>
using namespace std;
class aryan{
	int prn;
	public:
		
		
		aryan(void);  //Constructor Function declearation // Its default const having no parameters
		
		
		int display(){
			
			cout<<"Aryan's Personal Roll Number is "<<prn;
		}
}; 
 aryan::aryan()   //Constructor Function define  // Its default const having no parameters 
 {
prn=1903027;

}



int main()
{  
    aryan j;
	j.display();	
	return 0;
}


/**********Characteristics of constructor*******************/
//1. It sholud be declered in the public section of the class
//2.They are automatically invoked (called) whenever the object is created
//3.They can not retrun any value And do not have return type
//4.It can have default arguments
//5.We cannot refer to their address
