#include<iostream>
using namespace std;
class Number{
	int a ;
	public:
		Number(){
			a=0;
		
		}
		Number(int x)
		{
           a=x;
		   			
		}
		
		Number(Number &obj) //Copying fuction
		{
			cout<<"Copy Construction calls :"<<endl;
           a=obj.a;
		   			
		}
		
       void display()
	   {
       	cout<<"First Num is "<<a<<endl;
	   }
}; 
 



int main()
{  
    Number p,q,r(45);
    p.display();
     q.display();
     r.display();
     Number r1 (r); //Calling copying fuction
	  r1.display();
	return 0;
}

