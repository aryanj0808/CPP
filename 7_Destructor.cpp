#include <iostream>
using namespace std;

class Hero
{
    // default is private access modifier
    string name;
    int health;
    char level;

public:
    Hero()
    {
        cout << "Constructor Call" << endl;
    }
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
    // destructor function
    ~Hero()
    {
        cout << "Destructor is Called" << endl;
    }
};
int main()
{
    // This is static so automaically destructor is called
    Hero a;

    // This is dynamic so mannually we need to call destructor
    Hero *b = new Hero();
    delete b; // deleting memory
}