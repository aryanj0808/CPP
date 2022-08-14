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
    Hero(string n, int h, char lev)
    {
        name = n;
        health = h;
        level = lev;
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
    int getlevel()
    {
        return level;
    }
};
int main()
{
    Hero aryan = Hero("Aryan", 70, 'A');
    aryan.display();
    Hero Prassana = Hero("Prassana", 80, 'B');
    Prassana.display();
    aryan.setHealth(85);
    cout << aryan.getHealth() << endl;
}