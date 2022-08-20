#include<iostream>
#include<fstream> //This headerfile is used for read or write in file  
using namespace std;

/*
The useful classes for working with files in c++ Using #include<fstream>:
1.fstreambase
2.ofstream--> Derived from ftreambase which is used for writing. 
3.ifstream--> Derived from ftreambase which is used for Reading.

IN order work with files in c++, you will have to open it. Primarily,
there are two ways to open a file:
1.Using the Constructor.
2.Using the member function open() of the class
*/

int main(){
	//Opening Files using constructor:
	
	ofstream out("File.txt");
	cout<<"Enter your name : ";
	string aj;
	cin>>aj;
	
	out<<"My Name is "+aj;
	out.close();             //If we not close this File after Writing then we ll not open file in 
	                        //reading mode as a  output of program
	
	string aj1;
	ifstream in("File.txt");
	in>>aj1;
	getline(in , aj1);
	cout<<aj1;
	in.close();
	return 0;
}

