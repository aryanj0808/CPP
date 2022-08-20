#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it =v.begin();
    cout<<(*it)<<endl;

    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }
}
/*
Iterators are used to traverse from one element to another element, a process is known as iterating through the container.
The main advantage of an iterator is to provide a common interface for all the containers type.
Iterators make the algorithm independent of the type of the container used.
Iterators provide a generic approach to navigate through the elements of a container.
Syntax
<ContainerType> :: iterator;  
<ContainerType> :: const_iterator;  
Operations Performed on the Iterators:
Operator (*) : The '*' operator returns the element of the current position pointed by the iterator.
Operator (++) : The '++' operator increments the iterator by one. Therefore, an iterator points to the next element of the container.
Operator (==) and Operator (!=) : Both these operators determine whether the two iterators point to the same position or not.
Operator (=) : The '=' operator assigns the iterator.
Difference b/w Iterators & Pointers
Iterators can be smart pointers which allow to iterate over the complex data structures. A Container provides its iterator type.
Therefore, we can say that the iterators have the common interface with different container type.
*/