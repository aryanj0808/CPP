#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void printvector(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl; 
    }

};
int main(){
    vector<int> v;//vector declearation
    int n;//size of vector
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        // printvector(v);
        v.push_back(x);// This store value at the end of the vector 
                        //with time complexity O(1)

               
    }
    printvector(v);

    return 0;
}

        // v.pop_back();//This will remove last elements form vector
                        //With time complexity O(1)
        // vector<int> v2=v;// This v2 is a copy vector of v if we change in 
                            //in v2 that will not affect in v 
                            //Time complexity O(n)