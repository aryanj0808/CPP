#include <iostream>
using namespace std;

template<class T>     //Template Format

class vector{
  public:
  T* arr;             
  int size;
  vector(int m){
      size=m;
      arr= new T[size];  
      
      
  }
  T dotproduct(vector &v){
      
      T d=0;
      for(int i=0;i<size;i++)
      {
          d+=this->arr[i]*v.arr[i];
          
      }
      return d;
  }
};
int main()   
{
vector<float>v1(3);  //Data Type Decleared Here
v1.arr[0]=1.5;
v1.arr[1]=0.2;
v1.arr[2]=1.2;

vector<float>v2(3);  // Data Type Decleared Here
v2.arr[0]=0.5;
v2.arr[1]=7.8;
v2.arr[2]=0.6;

float a=v1.dotproduct(v2); 
cout<<a<<endl;

    return 0;
}

