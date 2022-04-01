#include<iostream>
using namespace std;
class ShopItem{
	int Id;
	float Price;
	public:
		void setdata(int a , float b){
			Id=a;
			Price=b;
		}
		void getdata(){
			cout<<"The ID number of item is : "<<Id<<endl;
			cout<<"The price of item is : "<<Price<<endl;
		}
};

int main(){
	int size = 3;
	ShopItem *Ptr = new ShopItem[size];//This pointer object is for setdata values
	ShopItem *Ptr01 = Ptr; // At last value or data When we increment Ptr in setdata,prt is increamented and to store getdata value we dont have address so we declear a new pointer object here to store getdata value 
	
	//Moral is we created two pointer objecrt one for setdata and second is for getdata!
	int p,i;
	
	float q;
	for(i=0;i<size;i++){
		cout<<"Enter ID and Price of item "<<i+1<<endl;
		cin>>p>>q;
		 Ptr->setdata(p,q);
		 Ptr++;
		
	}
	for(i=0;i<size;i++){
		
		Ptr01->getdata();
		Ptr01++;
	}
	
	return 0;
}
