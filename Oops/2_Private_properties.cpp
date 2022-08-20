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
};
int main()
{
    Hero aryan = Hero("Aryan", 70, 'A');
    aryan.display();
    Hero Prassana = Hero("Prassana", 80, 'B');
    Prassana.display();
}