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
			cout<<"name is \t"<<name<<endl;
			cout<<"roll is \t"<<roll<<endl;
		}
		void writetofile()
{
	ofstream outfile;
	outfile.open("test.dat",ios::binary|ios::app);
	readdata();//this is of s object of main
	outfile.write(reinterpret_cast<char *>(this),sizeof(*this));
	outfile.close();
	
}
void readfromfile()
{
	ifstream infile("test.dat",ios::binary|ios::in);
	while(!infile.eof())
	{
		if(infile.read(reinterpret_cast<char *>(this),sizeof(*this))>0)
			display();
	}
	
}
void read_one()
{
  int n;
  student s1;
  ifstream infile("test.dat",ios::binary);
  cout<<"enter record number u wnat to find";
  cin>>n;
  infile.seekg((n-1)*sizeof(s1));
  cout<<"size of s1 is"<<sizeof(s1)<<endl;
  infile.read(reinterpret_cast<char *>(&s1),sizeof(s1));
  s1.display();	
}
void numofcount(){
	ifstream infile("test.dat",ios::binary);
	infile.seekg(0,ios::end);
//	cout<<"last location is"<<infile.tellg();
	int count;
	count=infile.tellg()/sizeof(student);
	cout<<"there are "<<count <<"records";
}
};



int main()
{
	char ch;
	int choose;
	student s;
	while(1)
	{
		cout<<"enter choice 1.write to file \n 2.read from file\n3.readonerec\n4.count";
	cin>>choose;
	switch(choose){
		case 1:
			  s.writetofile();
			  break;
		case 2:
			 s.readfromfile();
			  break;
		case 3:
			s.read_one();
			break;
		case 4:
			s.numofcount();
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
