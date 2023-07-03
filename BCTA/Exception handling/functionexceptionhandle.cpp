//Exception handling
//WAP to calculate z=a/b.
#include<iostream>
using namespace std;
float calculate(float a,float b)
{
	if(b==0) throw b;
	else
	return a/b;
}
int main(){
	float a,b,c;
	cin>>a>>b;
	try{
     c=calculate(a,b);
     cout<<"ans"<<c;
	}
	catch(float)
	{
		cout<<"Division by zero error";
	}
	return 0;
}
