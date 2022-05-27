#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            // int candy;
            long long candy;
            cin>>candy;
            bags.insert(candy);
        }
        long long count=0;
        for(int i=0;i<k;i++){
            auto last_it=(--bags.end());
            // int candy=*last_it;
            long long candy=*last_it;
            count+=candy;
            bags.erase(last_it);
            bags.insert(candy/2);

        }
        cout<<count<<endl;
    }
}
/* YOUTUBE LINK FOR PROBLEM
https://www.youtube.com/watch?v=hoT_D60UzAU&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=9
input:
1
5 3
1 2 7 4 3
output:
14
*/