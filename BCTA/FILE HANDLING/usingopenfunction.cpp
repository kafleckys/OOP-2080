//Opening file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[25],email[25];
	ofstream outfile;
	outfile.open("abc.txt",ios::app);//append mode
	cout<<"Enter name";
	cin>>name;
	outfile<<name<<endl;
	cout<<"Enter mail";
	cin>>email;
	outfile<<email<<endl;
	outfile.close();
	return 0;
}
