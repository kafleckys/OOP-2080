//WAP to swap two values using concept of pointer
//using reference variable
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a=6,b=5;
	cout<<"before calling swap"<<a<<" "<<b<<endl;
	swap(a,b);//passing values as reference
	cout<<"swapped values"<<a<<" "<<b;
	return 0;
}
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

