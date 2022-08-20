#include<iostream>
using namespace std;

class student{
	protected:
		
		int prn;
		public:
			void setprn(int);
			void getprn(void);
			
};
void student :: setprn(int a){
     prn=a;
}
void student :: getprn(){
     cout<<"The PRN is :"<<prn<<endl;
}
class exam : public student{

	protected:
		int maths;
		int  phy;
		public:
			void setmarks(int,int);
	int getmarks();
};
void exam :: setmarks(int m1, int m2){

int maths=m1;
int phy=m2;
}
int  exam :: getmarks(){

return (maths,phy);

}
class result : public exam{
	float per;
	public:
		void display(){
			getprn();
			getmarks();
			cout<<"MArks in MATHS :"<<maths<<endl;
           cout<<"MArks in Physics :"<<phy<<endl;
			cout<<"Percentage is : "<<(maths+phy)/2<<"%"<<endl;
		}
		
};
int main(){
	result aj;
	aj.setprn(45);
	aj.setmarks(88,56);
	aj.display();
	
	return 0;
}
