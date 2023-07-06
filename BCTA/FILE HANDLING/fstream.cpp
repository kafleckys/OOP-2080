//Opening file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char n[25],e[25];
	fstream in1("abc.txt",ios::in);
	in1>>n;
	cout<<"name is ";
	cout<<n;
	in1>>e;
	cout<<"Gmail is ";
	cout<<e;
	return 0;
}
