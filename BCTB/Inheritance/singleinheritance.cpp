//WAP to create a class student that has data members name and 
//id and another class leader with data members union_name.Use
//single inheritance
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
		void readunion() {
		    readdata();
			cout<<"enter union";
			cin>>union_name;
		}
		void displayunion()
		{
		display();
		cout<<"union name is"<<union_name;	
		}
};
int main()
{
	leader l1;//object of derived class
	l1.readunion();//leader
	l1.displayunion();//leader
	return 0;
}
