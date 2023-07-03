
//WAP to find max of 2 numbers
#include<iostream>
#include<cstring>
using namespace std;
template<class T>
T maximum(T a,T b)
{
	if(a>b) return a;
	else return b;
}
char* maximum(char a[],char b[])
{
	if(strcmp(a,b)>0) return a;
	else return b;
}
int main(){
	int n1,n2,res;
	cout<<"Enter 2 numbers";
	cin>>n1>>n2;
	res = maximum(n1,n2);//int,int
	cout<<"ans is"<<res;
	float f1=4.4,f2=5.6,f3;
	f3=maximum(f1,f2);//float,float
	cout<<"ans is"<<f3;
	char c1='B',c2='D',c3;
	c3=maximum(c1,c2);//char,char
	cout<<"char is"<<c3;
	char s1[20]="sabin", s2[20]="rabin",*s3;
	s3=maximum(s1,s2);//string,string matching
	cout<<"string is"<<s3;
	return 0;
}

//	?: ternary operator
//	return (a>b)?a:b;

