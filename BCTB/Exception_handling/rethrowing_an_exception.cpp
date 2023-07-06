//wap to calculate c=a/b
//rethrowing an exception
#include<iostream>
using namespace std;
void calculate(int a,int b)
{
	try{
	if(b==0) throw b;
	else
	cout<<"solution is"<<a/b;
    }catch(int z)
    {
    	cout<<"exception caught inside function with value"<<a<<endl;
    	throw;//rethrowing an exception
	}
}
int main()
{   
    int n1,n2;
    cout<<"enter 2 numbers";
	cin>>n1>>n2;//user input
	try{	
	calculate(n1,n2);
}catch(int err)
{
	cout<<"exception caught from main with value"<<err;
}
	return 0;
}

