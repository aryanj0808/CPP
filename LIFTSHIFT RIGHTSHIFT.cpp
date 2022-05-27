#include <iostream>
using namespace std;

string left(string s){
    int n=s.length();
    char temp=s[0];
    for(int i=0; i<n-1; i++){
        s[i]=s[i+1];
    }
    s[n-1]=temp;
    return s;
    
}

string right(string s){
    int n=s.length();
    char temp=s[n-1];
    for(int i=n-1; i>=1; i--){
        s[i]=s[i-1];
    }
    s[0]=temp;
    return s;
    
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1,s2;
        s1=left(s);
        s2=right(s);
        
        if(s1==s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}