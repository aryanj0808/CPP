#include<iostream>
using namespace std;
class aryan{
	int prn,mbno;
	public:
		
		
		aryan(int);  //Constructor Function declearation // Its a const having parameters
		
		aryan(int, int);
		int display(){
			
			cout<<"Aryan's Personal Roll Number is "<<prn <<endl;
			cout<<"  AND Mobile number is "<<mbno<<endl;
		}
}; 
 aryan::aryan(int x)   //Constructor Function define  // Its a const having parameters
 {
prn=x;
mbno=0;

}
aryan::aryan(int x, int y) //Function overloading 
{
	prn=x;
	mbno=y;
	
}



int main()
{  
    aryan j(1903027);
    j.display();
    aryan s(800988,55534);
    s.display();
	
	return 0;
}


/**********Characteristics of constructor*******************/
//1. It sholud be declered in the public section of the class
//2.They are automatically invoked (called) whenever the object is created
//3.They can not retrun any value And do not have return type
//4.It can have default arguments
//5.We cannot refer to their address
