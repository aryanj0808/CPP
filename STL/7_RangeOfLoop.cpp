#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it =v.begin();
    cout<<(*it)<<" Value of *it v.begin"<<endl;

    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;
//Range Based Loop
//references
for (int &value : v){
    value++;
    // cout<<value<<" ";
}
for (int value : v){
    cout<<value<<" ";
}
for(int value : v){
    if(value==9){
        cout<<"Hii";
    }
}
cout<<endl;     
}