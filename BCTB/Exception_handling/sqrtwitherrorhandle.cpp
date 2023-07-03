//specifying throw list in function
//specifying exceptions
//WAP to calculate square root of given number.
//throw exception if number is negative.
#include<iostream>
#include<math.h>
using namespace std;
void check(int num) throw(int)//specifying exception
{ 
   if(num<0){
   throw num;
    }
   else
   cout<<"square root value is:"<<sqrt(num);
	
}
int main()
{
	
	int n1;
	cin>>n1;
	try{
	check(n1);
    } catch(int a)
    {
    	cout<<a;
    	cout<<"exception caught dont enter negative number";
	}
	return 0;
	
}

