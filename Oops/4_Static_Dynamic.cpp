#include <iostream>
using namespace std;

class Hero
{
    // default is private access modifier
    string name;
    int health;
    char level;

public:
    // // defining constructor which is help to access private properties
    // Hero(string n, int h, char lev)
    // {
    //     name = n;
    //     health = h;
    //     level = lev;
    // }

    void display()
    {
        cout << name << " is at " << level << " level having Health " << health << endl;
    }

    // Set function is to store values in private variable/datatype
    void setHealth(int h)
    {
        health = h;
    }
    // Get funtion is used to retrive stored value in private variable
    int getHealth()
    {
        return health;
    }
    void setname(string n)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
    void setlevel(int lev)
    {
        level = lev;
    }
    char getlevel()
    {
        return level;
    }
};
int main()
{
    // Static allocation
    Hero a;

    // Dynamic allocation
    Hero *b = new Hero;

    b->setHealth(70);
    cout << b->getHealth() << endl;

    // cout << sizeof((*b)) << endl;//value
    // cout << b << endl; //Address
    // cout << sizeof(a) << endl;
}