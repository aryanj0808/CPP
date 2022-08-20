#include<iostream>
using namespace std;

class complex{
	  friend  complex sumcomp(complex x, complex y);  //decleard friend function
int a,b;
    public:
	       void setnum(int n, int m){
	
	a=n;
	b=m;
}
	       void display(){
   	
   	cout<<"Complex Number is "<<a<<"+"<<b<<"i"<<endl;
   }
         
           
        
   };
    
    complex sumcomp(complex x , complex y) //Define Friend function with object argument
	{
    	complex z;
   	z.setnum((x.a+y.a) , (x.b+y.b));
   	return z;
   
   	
   }
   /*proprties of friend function
   1. NOt in the scope of class
   2.We can not be called from the object of class 
   3.It can access private datd from class
   4.Usually content the object as arguments
   5.It can decleared in private as well as public section of class
   6.It cannont acess the members directly by their name and need object_name.member_name to access any member
   */
int  main()

{
	complex c1,c2;

	
		c1.setnum(4,5);
		c1.display();
		
		c2.setnum(8,7);
		c2.display();
	
	complex	sum = sumcomp( c2 ,c1);
		sum.display();
		
	
	
	return 0;
	}
	
	

	
   
   
   
  
