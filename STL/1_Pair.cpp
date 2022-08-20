#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    //PAIRS 
    pair<int,string>p;
    // p=make_pair(2,"aryan");
    p={3,"Aryan"};

    pair<int,string> &p1=p;
    p1.first=5;
    cout<<p.first<<" "<<p.second<<endl;

//********Pair in two array*****//
    int a[]={1,2,3};
    int b[]={7,8,9};
    pair<int,int>p_array[3];
    p_array[0]={1,7};
    p_array[1]={2,8};
    p_array[2]={3,9};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }







    return 0;
}