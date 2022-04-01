#include<iostream>
using namespace std;

class emp

{
	int id;
	int salary;
	
	public:
		void setid()
		{
			cout<<"Enter the EMp id : "<<endl;
			cin>>id;
		}
		
		void getid()
		
		{
			cout<<"This is the id of Emp : "<<id<<endl;
		}
};

int main()
{
//	emp aj;
//	aj.setid();
//	aj.getid();

   emp sham[4];
   for(int i=0;i<4;i++)
   
   {
  sham[i].setid();
  sham[i].getid();
     }
	return 0;
	
}
