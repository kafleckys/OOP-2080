//WAP to find largest of 2 numbers
#include<iostream>
using namespace std;
int max(int a,int b)
{
	//return a>b?a:b;
	if(a>b) return a;
	else return b;
}
int  main()
{
	int a=6,b=7,c;
	c=max(a,b);
	cout<<"max is"<<c;
	return 0;
}
