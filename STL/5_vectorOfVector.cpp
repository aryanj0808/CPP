#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void printvector(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;//vectors in vectors
    for(int i=0;i<N;++i){
        int n;
        cin>>n;
        vector<int> temp; //decleration of inside vector
        for(int j=0;j<n;++j){ //inside vector 
            int x;
            cin>>x;
            temp.push_back(x); //stored values in inside vector
        }
        v.push_back(temp);//stored inside vector in main vector
    }
    for (int i=0;i<N;++i){
        printvector(v[i]);
    }

    cout<<v[1][1];
}