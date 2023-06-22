//inheritance pointer object
//we need virtual function
#include<iostream>
using namespace std;
class Animal{
	public:
		public:
		virtual void display()=0;//pure virtual
};
class Cow:public Animal{
	public:
		void display(){
			cout<<"Class dervied class cow"<<endl;
		}
};
class Dog:public Animal{
	public:
		void display(){
			cout<<"Class derived class Dog"<<endl;
			
		}
};
int main()
{
	//pure virtual function normal object cannot be made
	Animal *panm;
//	Animal a;//Animal is abstract class
	Cow cw;
	Dog dg;
	
	panm=&cw;
	panm->display();
	panm=&dg;
	panm->display();
	return 0;
}

