//WAP to calculate sum and multiplication using 
//single function and display result from main.
#include<iostream>
using namespace std;
void calc(int,int,int&,int&);//function prototype
int main()
{
	int a=3,b=6,s,m;
	calc(a,b,s,m);//function call
	cout<<s<<"and"<<m;
	return 0;
}
void calc(int a,int b,int &sum,int &mul)//definition
{
	sum=a+b;
	mul=a*b;
}
