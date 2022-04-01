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


/***********Using For Loop**************/

    for(int i=0;i<5;i++)
    
    {
    	
	 cout<<"Marks of "<<i+1<<"="<<marks[i]<<endl;
	 
	 }
	 
/******Pointer and Array*************/
int* p=marks;

cout<<"The value of (*p)is "<<*p<<endl;
cout<<"The value of (*p+1)is "<<*(p+1)<<endl;
cout<<"The value of (*p+2)is "<<*(p+2)<<endl;
cout<<"The value of (*p+3)is "<<*(p+3)<<endl;
cout<<"The value of (*p+4)is "<<*(p+4)<<endl<<endl;

/***********Using For Loop**************/

cout<<"Marks using Pointer"<<endl<<endl;
for(int j=0;j<5;j++)
{ 
   
	cout<<"Marks of  "<<j<<"="<<*(p+j)<<endl;
}

	return 0;
	
}
