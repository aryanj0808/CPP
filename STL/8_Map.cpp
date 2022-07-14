#include<bits/stdc++.h>
using namespace std;
//Insertion deletion all time complexity is log O(n)
int main(){
    map<string, int> m;
    int n;
    
    cin>>n;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }


}
