#include<iostream>
using namespace std;

class Emp{
    int id;
    string name;
public:

    Emp(){
        // cout<<a<<endl;
    }
    void display(int id, string name){
        this->id=id;
        this->name=name;

        cout<<this->id<<"  "<<this->name<<endl;

    }
};