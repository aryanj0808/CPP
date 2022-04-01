#include<iostream>
using namespace std;
int main()
{
	/************Break Loop**************/ 
//	for(int i=0;i<=10;i++)
//	{
//		cout<<i<<endl;
//		
//		if(i==5)
//		{
//			break; // '1' to '5' will be displayed and futher numbers will not displayed because of break comanad after cout:
//		}
//	}


   /********Change in output*********/

	for(int i=0;i<=10;i++)
	{
		if(i==5)
		{
			break; // '1' to '4' will be displayed and futher numbers will not displayed because of break comanad before cout:
		cout<<i<<endl;
		
	}
	
	
	/************Continue Loop**************/ 

//for(int i=0;i<=10;i++)
//{
//	if(i==5) 
//	{
//		continue;  //'5' Will be not displayed but '1' to '4' and '6' to '10' will displayed
//	}
//	cout<<i<<endl;
//	
//}

	return 0;
}
