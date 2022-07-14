#include<bits/stdc++.h>
using namespace std;
int main(){
	//map<pair<int,int>,int>m;
//	pair<int,int> p1,p2;
//	p1={1,2};
//	p2={1,3};
//	cout<<(p1<p2)<<endl;


	map<pair<string, string>,vector<int>>m;
	int n;
	cin>>n;
	while(n--){
		string fn,ln;
		int ct;
		cin>>fn>>ln>>ct;
		for(int j=0;j<ct;j++){
		int x;
		cin>>x;
		m[{fn,ln}].push_back(x);
		}
	}
	for(auto &pr :m){
		auto &fun =pr.first;
		auto &list =pr.second;
		cout<<fun.first<<" "<<fun.second<<endl;
		cout<<list.size()<<endl;
		for(auto &ele : list){
		cout<<ele<<" ";
		}
		cout<<endl;
	}

}

//./a.out<13_Nesting_IN_STL


