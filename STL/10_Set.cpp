#include <bits/stdc++.h>
using namespace std;
// Insertion deletion all time complexity is log O(n)
void print(set<string> &s)
{

    // for(string value : s){
    //     cout<< s <<endl;
    // }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("asd");
    s.insert("xyz");
    s.insert("qwe");
    print(s);

    // find specific element from SET:
    // s.find fuction gives us iterators value
    auto it = s.find("abc");
    if (it != s.end())
    {
        cout << (*it) << endl;
        // s.erase(it);
    }
    // print(s);
    //Take a quary if string is present print yes otherwise no
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
/*
Input:
3
abc
asd
asdas
*/