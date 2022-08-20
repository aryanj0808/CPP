#include<iostream>
#include <cstring>
using namespace std;

class Date{
    int dd,mm,yy;
    public:
        Date();
        Date(int,int,int);
        void Display();

};
Date::Date(){
    dd=1;
    mm=1;
    yy=2000;
}
Date::Date(int d,int m, int y){
    dd=d;
    mm=m;
    yy=y;
}
void Date::Display(){
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
class Emp{
    int empid;
    char name[20];
    Date dob;
    public:
        Emp();
        Emp(int, char*, int, int, int);
        void Display();
};
Emp::Emp(){
    empid=101;
    strcpy(name,"abc");

}
Emp::Emp(int id, char *n, int d, int m, int y){
    empid =id;
    strcpy(name,n);
}
void Emp::Display(){
    cout<<empid<<endl;
    cout<<name<<endl;
    dob.Display();
}

int main(){
    Emp Defalut;
    Defalut.Display();
    Emp aryan= *new Emp(193,"Aryan", 8, 8, 2001);
    aryan.Display();
    return 0;
}