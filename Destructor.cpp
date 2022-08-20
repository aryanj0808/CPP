#include<iostream>
using namespace std;

int count = 0;
class num{
	 public:
	 	num(){
	 		
	 		count++;
	 		cout<<"Construction is Called "<<count<<endl;
		 }
	~num(){
		cout<<"Destructor is called  "<<count<<endl;
		count--;
	}
};
int main(){
	cout<<"We are in main Fuction"<<endl;
	cout<<"Creating 1st Object:"<<endl;
	num a1;
	{
		cout<<"Entered in num a1 block:"<<endl
		<<"Creating two more objects "<<endl;
		num a2,a3;
		cout<<"Exting this block "<<endl;
	}
	
	cout<<"Back to main Function"<<endl;
	return 0;
}
