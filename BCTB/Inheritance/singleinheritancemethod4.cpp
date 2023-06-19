//WAP to create a class student that has data members name and 
//id and another class leader with data members union_name.Use
//single inheritance
//function overriding baseclass:: scope resolution operator
#include<iostream>
using namespace std;
class student{
	private:char name[25];
			int id;
    public:
	void readdata()
	{
		cout<<"enter name and id";
		cin>>name>>id;
	}
	void display() {
		cout<<"name is"<<name<<endl<<"id is"<<id<<endl;
	}
};
class leader:public student{
	private:char union_name[25];
	public:
		void readdata() {
			student::readdata();
			cout<<"enter union";
			cin>>union_name;
		}
		void display()
		{
			student::display();
		cout<<"union name is"<<union_name;	
		}
};
int main()
{
	leader l1;//object of derived class
	l1.readdata();  //l1.leader::readdata();
	l1.display();
	return 0;
}
