//Single Inheritance :
//	WAp to create a class student that has name and
//	stuid as data members. Create another class
//	leader that has unionname as data member. Use
//	single inheritance to read values of student.
#include<iostream>
using namespace std;
class student{
	protected:char name[25]; 
			int stuid;
};
class leader:public student{
	private:char union1[30];
	public: void readunion() 
	{
   cin>>name>>stuid;
	cout<<"enter union"; cin>>union1;	
	}
	void disunion() 
	{
 cout<<name<<stuid;
	cout<<"union is"<<union1;	
	}
};
int main() 
{
	leader l1;
	l1.readunion();
	l1.disunion();
	return 0;
}

