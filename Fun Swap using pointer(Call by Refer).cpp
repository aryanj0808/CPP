#include<iostream>
using namespace std;
int swap(int* a, int* b);      /*USer defined function After main function*/    



//int swap(int* a, int* b)     /*USer defined function Before main function*/
//
//		
//	int c=*a;
//	    *a=*b;
//	    *b=c;
//	    return 0;
//};

int main ()
{
int a=45,b=54;
	
	swap(&a,&b);
	cout<<"a="<<a<<endl<<"b="<<b;
	return 0;
	
}
int swap(int* a, int* b)     /*USer defined function After main function*/    
{
		
	int c=*a;
	    *a=*b;
	    *b=c;
	    return 0;
}

