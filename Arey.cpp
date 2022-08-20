#include<iostream>
using namespace std;
int main()
{
	int marks[]={89,56,78,98,86};
	
	
//	cout<<"Mark 1="<<marks[0]<<endl;
//	cout<<"Mark 2="<<marks[1]<<endl;
//	cout<<"Mark 3="<<marks[2]<<endl;	
//	cout<<"Mark 4="<<marks[3]<<endl;
//	cout<<"Mark 5="<<marks[4]<<endl;	


/***********Using for Loop**************/

    for(int i=0;i<5;i++)
    
    {
    	
	 cout<<"Marks "<<i+1<<" = "<<marks[i]<<endl;
	 
	 }

	
	return 0;
	
}
