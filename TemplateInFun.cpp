#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Because of this template we donot need to specify datatype of variables
//We can get int as well as float value 
template<class T1,class T2>
float avg(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    float a= avg(10, 7.5);
    cout<<a<<endl;
    // printf("%f",a);
    return 0;
}