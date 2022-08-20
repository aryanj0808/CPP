#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << " Hello Bhai " << endl;
    }
    // Same function name and return type but different arguments
    void sayHello(string name)
    {
        cout << " Hello " << name << endl;
    }
};

int main()
{
    A s;
    s.sayHello();
    s.sayHello("aryan");
    return 0;
}