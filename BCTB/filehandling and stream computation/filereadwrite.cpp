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
			cout<<"roll is"<<rn;
		}
};
int main()
{
	student s,s1;
	s.readdata();
	ofstream outfile;
	outfile.open("kec.dat",ios::binary);
	outfile.write(reinterpret_cast<char*>(&s),sizeof(s));
	outfile.close();
	ifstream infile;
	infile.open("kec.dat",ios::binary);
	infile.read(reinterpret_cast<char*>(&s1),sizeof(s1));
	s1.display();
	infile.close();
	return 0;
}
