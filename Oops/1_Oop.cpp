#include <iostream>
using namespace std;

class Hero
{
public:
    string name;
    int health;
    char level;

    Hero()
    {
    }
    void display()
    {
        cout << name << " is at " << level << " level having Health " << health << endl;
    }
};
int main()
{
    Hero aryan;
    aryan.name = "Aryan";
    aryan.health = 45;
    aryan.level = 'A';
    aryan.display();
}