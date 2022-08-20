#include <iostream>
using namespace std;

class base1
{
protected:
	int num1; // This data member is accessable in child class but not globly

public:
	void setnum1(int x)
	{

		num1 = x;
	}
	void getnum1()
	{
		cout << "Base 1 Number is :" << num1 << endl;
	}
};
class base2
{
protected:
	int num2; // This data member is accessable in child class but not globly

public:
	void setnum2(int x)
	{

		num2 = x;
	}
	void getnum2()
	{
		cout << "Base 2 Number is :" << num2 << endl;
	}
};
class derived : public base1, public base2
{
protected:
	int num3;

public:
	int sum()
	{
		getnum1();
		getnum2();
		// In this num1 and num2 is protected
		// in base1 and base2 and it is accessable directly
		num3 = num1 + num2;
		cout << "The sum of base1 num and base2 num :" << num3 << endl;
	}
};

int main()
{
	derived aj;
	aj.setnum1(25);
	aj.setnum2(55);
	aj.sum();
	return 0;
}
