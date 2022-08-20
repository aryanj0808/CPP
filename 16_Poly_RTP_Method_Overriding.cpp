#include <iostream>
using namespace std;
class Base
{
public:
    void name()
    {
        cout << "ARYAN" << endl;
    }
};
class derived : public Base
{
public:
    // Same function name argument and return type but in different class
    // that is called as method or function overriding
    void name()
    {
        cout << "ARYAN JADHAV" << endl;
    }
};

int main()
{
    Base ba;
    ba.name();
    derived dr;
    dr.name();

    return 0;
}