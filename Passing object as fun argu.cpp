#include<iostream>
using namespace std;

class complex{
	
int a,b;
public:
	void setnum(int x, int y){
		a=x;
		b=y;
	}
	
	void sum(complex p, complex q)
	
	{
		 a=p.a+q.a;
		 b=p.b+q.b;
	}
	
	void print()
	{
		cout<<"Complex Number = "<<a<<"+"<<b<<"i"<<endl;
	}
};

int main()
{
	complex c1,c2,c3;
	
	c1.setnum(4,5);
	c1.print();
	
	c2.setnum(6,7);
	c2.print();
	
	c3.sum(c1,c2);
	c3.print();
	
	return 0;
	
}
