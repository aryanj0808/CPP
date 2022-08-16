#include <iostream>
using namespace std;

class Student
{
    // Encapsulation done when data member are private
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
    int setAge(int a)
    {
        this->age = a;
    }
};
int main()
{
    Student st;
    st.setAge(50);
    cout << st.getAge() << endl;
    return 0;
}