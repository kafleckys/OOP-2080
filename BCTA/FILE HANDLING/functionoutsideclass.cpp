//WAP to create a class student with name and
// roll. Store data in file and display 
//information to user
#include<iostream>
#include<fstream>
using namespace std;
class student{
	char name[50];
	int roll;
	public:
		void readdata()
		{
			cin>>name>>roll;
		}
		void display()
		{
			cout<<"name is"<<name<<endl;
			cout<<"roll is"<<roll;
		}
};
void writetofile()
{
	student s;
	ofstream outfile;
	outfile.open("test.dat",ios::binary|ios::app);
	s.readdata();
	outfile.write(reinterpret_cast<char *>(&s),sizeof(s));
	outfile.close();
	
}
void readfromfile()
{
	student s1;
	ifstream infile("test.dat",ios::binary|ios::in);
	while(!infile.eof())
	{
		if(infile.read(reinterpret_cast<char *>(&s1),sizeof(s1))>0)
			s1.display();
	}
	
}
int main()
{
	char ch;
	int choose;
	while(1)
	{
		cout<<"enter choice 1.write to file 2.read from file";
	cin>>choose;
	switch(choose){
		case 1:
			  writetofile();
			  break;
		case 2:
			  readfromfile();
			  break;
		default:
			cout<<"enter valid choice";
	} 
	cout<<"do you wnat to cont yn";
	cin>>ch;
	if(ch=='N'||ch=='n') break;		
	}
	return 0;
}
