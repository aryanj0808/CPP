#include <iostream>
using namespace std;

class Hero
{
    // default is private access modifier
    string name;
    int health;
    char level;

public:
    // defining constructor which is help to access private properties
    // parameterised Constructor
    Hero(string name, int health, char level)
    {
        // this keyword is a pointer which indicate address of current object
        // this->name is mean that 'name' value is stored at object address of variable 'name'
        this->name = name;
        this->health = health;
        this->level = level;
    }
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
};
int main()
{
    Hero a;
    Hero aryan = Hero("Aryan", 70, 'A');
    aryan.display();
}