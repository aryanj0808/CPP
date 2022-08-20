#include <iostream>
using namespace std;

class Hero
{

public:
    static int age;
    static void print()
    {
        cout << age << endl;
    }
    Hero()
    {
    }
    void display()
    {
        cout << age << endl;
    }
};
int Hero::age = 10;
int main()
{
    // Access without object
    Hero::print();
}