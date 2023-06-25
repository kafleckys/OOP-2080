//Create a base class Animal and 
//inherit it to child class Cow and another child
//class Dog.and explain polymorphm.

#include<iostream>
using namespace std;
class Animal{
	public:
	virtual void display()=0;
};
class Cow:public Animal{
	public:void display(){
		cout<<"Display inside class cow"<<endl;
	}
};
class Dog:public Animal{
public:void display(){
		cout<<"Display inside class dog"<<endl;
	}	
};
int main()
{
	Animal *p;
	//Animal a;
	Cow c;
	p=&c;
	p->display();
	Dog d;
	p=&d;
	p->display();
	return 0;
}

