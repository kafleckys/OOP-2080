//WAP to find largest of 2 numbers
#include<iostream>
#include<cstring>
using namespace std;
//template type
template<class T>
T maxONE(T a,T b)
{
	if(a>b) return a;
	else return b;
}
//for string type data
char* maxONE(char a[10],char b[10])
{
	if (strcmp(a,b)>0) return a;
	else return b;
}
int  main()
{
	int a=6,b=7,c;
	c=maxONE(a,b);//function call with int
	cout<<"max is"<<c;
	float f1=6.6,f2=8.9;
	cout<<"FLOAT MAX IS"<<maxONE(f1,f2);//float
	char c1='a', c2='g';
	cout<<"char MAX IS"<<maxONE(c1,c2);//char
	char s1[10]="apple", s2[10]="ball";
	cout<<"string MAX IS"<<maxONE(s1,s2);//char
	return 0;
}
