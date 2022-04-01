#include<iostream>
using namespace std;
missingnum(){
	
	
}
int main(){
		int n;
	int arr[n];

	cout<<"Enter array size"<<endl;

	cin>>n;
		cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s= sizeof(arr)/sizeof(arr[0]);
	int missnum=missingnum();
	cout<<s;

	
	return 0;
}
