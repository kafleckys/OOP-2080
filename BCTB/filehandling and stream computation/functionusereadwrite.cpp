//WAP to create a class student with name,
//rn. Store data in file and read from file.
//read and write
#include<iostream>
#include<fstream>
using namespace std;
class student{
	private:
		char name[45];
		int rn;
	public:
		void readdata()
		{
			cin>>name>>rn;
		}
		void display()
		{
			cout<<"name is"<<name<<endl;
			cout<<"roll is"<<rn<<endl;
		}
};
void writetofile()
{
	student s;
	s.readdata();
	ofstream outfile;
	outfile.open("kec.dat",ios::binary|ios::app);
	outfile.write(reinterpret_cast<char*>(&s),sizeof(s));
	outfile.close();
}
void readfromfile()
{
	student s1;
	ifstream infile;
	infile.open("kec.dat",ios::binary);
	while(!infile.eof())
	{
	if(infile.read(reinterpret_cast<char*>(&s1),sizeof(s1)))
	        s1.display();
	}

	infile.close();
}
int main()
{
	int choice;
	char ch;
	while(1)
	{	
	cout<<"1.write 2.read enter one";
	cin>>choice;
	switch(choice)
	{
		case 1:writetofile(); break;
		case 2:readfromfile(); break;
		default:cout<<"invalid choice";
	}
	cout<<"d u w to cont";
	cin>>ch;
	if(ch =='N'||ch=='n') break;	
	}
	return 0;
}
