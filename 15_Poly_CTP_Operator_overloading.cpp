#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    // In this funtion '+' operator work as a Subtraction operator
    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << value2 - value1 << endl;
    }
    // In this funtion '()' operator return a simple statement
    void operator()()
    {
        cout << "I am Bracket" << endl;
    }
};

int main()
{
    A obj1, obj2;
    obj1.a = 5;
    obj2.a = 10;
    obj1 + obj2;
    obj1();
    return 0;
}