//Exception handling
//WAP to calculate z=a/b.
#include<iostream>
using namespace std;
void calculate(float a,float b)
{
	if(b==0) throw b;
	else 
	cout<<"ans"<<a/b;
}
int main(){
	float a,b;
	cin>>a>>b;
	try{
    calculate(a,b);
	}
	catch(float)
	{
		cout<<"Division by zero error";	
	}
	return 0;
}
