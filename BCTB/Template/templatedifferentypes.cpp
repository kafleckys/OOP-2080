//Template with different types
#include<iostream>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b)
{
	cout<<"A is "<<a<<"B is"<<b;
}
int  main()
{
	int a=6;
	char b[10]="Ramesh";
	display(a,b);//int,string
	display(1.2,"Roshan");//float,string
	display(12,14);//int,int
	return 0;
}
