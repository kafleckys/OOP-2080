//Opening file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[25],email[25];
	ofstream outfile("abc.txt");
	if(!outfile)
	{
		cout<<"file cannot opened";
		exit(1);
	}
	if(outfile.bad())
	{
		cout<<"wrting not possible";
		exit(1);
	}
	cout<<"Enter name";
	cin>>name;
	outfile<<name<<endl;
	cout<<"Enter mail";
	cin>>email;
	outfile<<email;
	return 0;
}
