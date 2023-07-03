//Exception handling
//WAP to calculate z=a/b.
#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b;
	try{
	if(b==0) throw b; 
	c=a/b;
	cout<<"result is "<<c;
	}
	catch(float)
	{
		cout<<"Division by zero error";	
	}
	return 0;
}
