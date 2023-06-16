//Single Inheritance :
//	WAp to create a class student that has name and
//	stuid as data members. Create another class
//	leader that has unionname as data member. Use
//	single inheritance to read values of student.
#include<iostream>
using namespace std;
class student{
	private:char name[25]; 
			int stuid;
    public: void readdata() 
	{
    cout<<"enter name";cin>>name;
	cout<<"enter id";cin>>stuid;	
	}
	void display() 
	{
cout<<"name is"<<name<<endl<<"id is"<<stuid<<endl;
	}
};
class leader:public student{
	private:char union1[30];
	public: void readunion() 
	{
		readdata();
	cout<<"enter union"; cin>>union1;	
	}
	void disunion() 
	{
		display();
	cout<<"union is"<<union1;	
	}
};
int main() 
{
	leader l1;
//	l1.readdata();//leaderdata() must be in public
	l1.readunion();
//	l1.display();
	l1.disunion();
	return 0;
}

