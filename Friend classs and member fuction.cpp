#include<iostream>
using namespace std;


class complex; //Class declearation

class calculator{
   	
   	public:
   		int sum(int a, int b){
   			return (a+b);
   			
		   }
		  int sumcom1(complex x,complex y);
		  int sumcom2(complex x,complex y);
		   
		   
   }; 
   
   
class complex{
	int a,b;
//	  friend int calculator::sumcom1(complex x, complex y); //Decleared Indiv
//	  friend int calculator::sumcom2(complex x, complex y);

      /*          OR                     */
      
      friend class calculator;
    public:
	       void setnum(int n, int m){
	
	a=n;
	b=m;
}
	       void display(){
   	
   	cout<<"Complex Number is "<<a<<"+"<<b<<"i"<<endl;
   }
         
           
        
   };
    
    
 int calculator:: sumcom1(complex x,complex y){
		   	return (x.a+y.a);
		   }  
		   int calculator:: sumcom2(complex x,complex y){
		   	return (x.b+y.b);
		   } 
   	
   
   
int  main()

{
	complex c1,c2;

	
		c1.setnum(4,5);
		c1.display();
		
		c2.setnum(8,7);
		c2.display();
	
	calculator cal;
int y= cal.sumcom1( c1 ,c2);
int z= cal.sumcom2( c1 ,c2);
	cout<<"The sum of Complex num is :"<<y<<"+"<<z<<"i"<<endl;
		
	
	
	return 0;
	}
	
	

	
   
   
   
  
