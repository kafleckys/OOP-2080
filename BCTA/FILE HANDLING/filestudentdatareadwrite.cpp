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
int main()
{
	student s,s1;
	ofstream outfile;
	outfile.open("kec.dat",ios::binary|ios::app);
	s.readdata();
	outfile.write(reinterpret_cast<char *>(&s),sizeof(s));
	outfile.close();
	ifstream infile("kec.dat",ios::binary|ios::in);
	while(!infile.eof())
	{
		if(infile.read(reinterpret_cast<char *>(&s1),sizeof(s1))>0)
			s1.display();
	}

	return 0;
}
