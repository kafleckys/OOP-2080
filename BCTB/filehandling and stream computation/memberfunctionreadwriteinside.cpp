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
		void writetofile()
        {
	this->readdata();
	ofstream outfile;
	outfile.open("kec.dat",ios::binary|ios::app);
	outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
	outfile.close();
        }
        
        void readfromfile()
{
	ifstream infile;
	infile.open("kec.dat",ios::binary);
	while(!infile.eof())
	{
	if(infile.read(reinterpret_cast<char*>(this),sizeof(*this)))
	        display();
	}

	infile.close();
}
};


int main()
{
	int choice;
	char ch;
	student s;
	while(1)
	{	
	cout<<"1.write 2.read enter one";
	cin>>choice;
	switch(choice)
	{
		case 1:s.writetofile(); break;
		case 2:s.readfromfile(); break;
		default:cout<<"invalid choice";
	}
	cout<<"d u w to cont";
	cin>>ch;
	if(ch =='N'||ch=='n') break;	
	}
	return 0;
}
