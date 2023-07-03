//Opening file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char n[25],e[25];
	ifstream infile("abc.txt");
	infile>>n;
	cout<<"name is";
	cout<<n;
	infile>>e;
	cout<<"mail is";
	cout<<e;
	return 0;
}
