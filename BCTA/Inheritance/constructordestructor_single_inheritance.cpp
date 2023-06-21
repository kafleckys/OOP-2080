//Constructor and destructor in single 
//inheritance
#include<iostream>
#include<cstring>
using namespace std;
class Base
{private: char name[25];
	public:Base () {
		cout<<"Default cons in base "<<endl;
	}
	Base(char n[])
	{
	strcpy(name,n);	
	cout<<"Parameterised inside base"<<endl;
	}
	~Base() {
		cout<<"Destructor of base"<<endl;
	}
	void displaybase() {
		cout<<"name is "<<name;
	}
	
};
class Derived:public Base
{
	private: int age;
	public: Derived() {
		cout<<"default const of derived"<<endl;
	}
	Derived(char name[],int a):Base(name)
	{
		age=a;
	 cout<<"parameterised of derived"<<endl;
	}
	~Derived() {
		cout<<"Destructor of derived"<<endl;
	}
	void display()
	{
		displaybase();
		cout<<"age is"<<age;
	}
	
};
int main()
{
	Derived d1;
	Derived d2("Roshan",12);
	d2.display();
	return 0;
}
