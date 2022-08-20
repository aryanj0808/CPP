#include<iostream>
using namespace std;
class binary
{
	//private:
	
	string s;
 
	public:
		void read();
		void oc(); //Ones compliment
		void display();
		void check();
		
};

void binary :: read()
{
	cout<<"Enter a Binary Number: "<<endl;
	cin>>s;
}
void binary:: check()
	{
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)!='0' && s.at(i)!='1')
			 {
			 	cout<<"Given Number is not binary Number"<<endl;
			 	exit (0);
			 	
			 }
			 
			 }
		}
void binary :: oc()
{	cout<<"Complimentary of binary number is: ";
		for(int i=0;i<s.length();i++)
		{
		
		 if(s.at(i)=='0')
		 {
		 cout<<'1';	
		 }
		 else 
		 {
		 	cout<<'0';
		 }
	}
	cout<<endl;
		
	}
	void binary:: display()
	{
		 cout<<"Binary number is : ";
		 for(int i=0;i<s.length();i++)
		 {
		 
		  cout<<s.at(i);
       	}
       	cout<<endl;
   };
int main()
{
	binary a;
	
	a.read();
	a.check();
	a.display();
	a.oc();

	
	return 0;
}
