#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl;

}

int main(){
    //input of N Vectors of n number of arrays
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;++i){
        int n;
        cin>>n;
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    //Input Code END
    //Printing output
    for(int i=0;i<N;++i){
    printvector(v[i]);
    }
    return 0;
}
/*Input:
3
3
1 2 3
4
1 2 3 4
5 
1 2 3 4 5
*/