#include <iostream>
using namespace std;

class Hero
{

public:
    static int age;
    Hero()
    {
    }
    void display()
    {
        cout << age << endl;
    }
};
int Hero::age = 5;
int main()
{
    // Access without object
    cout << Hero::age << endl;
}