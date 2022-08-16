#include <iostream>
using namespace std;

class Human
{
    int weight, age;

public:
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getWeight()
    {
        return this->weight;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;
    string getColor()
    {
        return this->color;
    }
    void setColor(string color)
    {
        this->color = color;
    }

    void sleep()
    {
        cout << "male is slepping " << endl;
    }
};
int main()
{
    Male st;
    st.setAge(150);
    cout << "Age : " << st.getAge() << endl;
    st.setColor("Black");
    cout << "Color : " << st.getColor() << endl;
    st.setWeight(160);
    cout << "Weight : " << st.getWeight() << endl;
    return 0;
}