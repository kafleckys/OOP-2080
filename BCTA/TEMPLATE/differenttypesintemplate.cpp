//template with different types
#include<iostream>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b){
	cout<<"values are "<<a<<" "<<b;
}
int main()
{
	int a=5,b=6;
	float f1=3.4;
	display(a,b);//int int
	display(f1,f1);//float,float
	display(f1,a);//float,int
	display('A',4);//char,int
	return 0;
}

//Homework
//WAP to overload function template with other
//function template
