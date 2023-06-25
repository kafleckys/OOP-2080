//WAP to create a class Vehicle that contains
//color as data member and another class 
//Motorbike with data member number.Inherit 
//class Vehicle to Motorbike.
//Create constructors
#include<iostream>
#include<cstring>
using namespace std;
class Vehicle{
	private:char color[25];
	public:
		Vehicle(){
			strcpy(color,"pink");
			cout<<"Default constructor in base"<<endl;
		}
		Vehicle(char b[])
		{
		strcpy(color,b);
		cout<<"parameterised of base"<<endl;	
		}
		~Vehicle(){
			cout<<"Destructor of Base"<<endl;
		}
		void display()
		{
			cout<<"Color is:"<<color<<endl;
		}
};
class Motorbike:public Vehicle{
	private:int number;
	public:
		Motorbike(){
			number=1234;
			cout<<"Default constructor of derived"<<endl;
		}
		Motorbike(char a[],int n):Vehicle(a)
		{
			cout<<"Parameterised of derived"<<endl;
			number=n;
		}
		~Motorbike(){
			cout<<"destructor of child"<<endl;
		}
		void display()
		{
			Vehicle::display();//calls display of base
			cout<<"number is"<<number<<endl;
		}
};
int main()
{
	Motorbike m;//child class object
	Motorbike x("Red",5678);
	m.display();
	x.display();
	return 0;
}
//
//Homework:
//	Explain constructor invocation with example
//	in case of Multiple inheritance.
