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
	public: void readdata() 
	{
		student::readdata();
	cout<<"enter union"; cin>>union1;	
	}
	void display() 
	{
		student::display();
	cout<<"union is"<<union1;	
	}
};
int main() 
{
	leader l1;
//	l1.student::readdata();
	l1.readdata();//calls of class leader
//	l1.student::display();
	l1.display();
	return 0;
}


//TRy at home
WAP to create class student that has name,id. 
Another class employe that has org_name and empid.
Inherit class student and employee to third class
marketing that has working_hour data member.
Read data of marketing officer. 
1.using member function overriding
2.without using member function overriding
