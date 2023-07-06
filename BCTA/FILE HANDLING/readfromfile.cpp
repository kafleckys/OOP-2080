//Opening file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char n[25],e[25];
	ifstream infile("abc.txt",ios::in);
	infile>>n;
	cout<<"name is ";
	cout<<n;
	infile>>e;
	cout<<"Gmail is ";
	cout<<e;
	return 0;
}
