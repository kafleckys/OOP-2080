//inheritance pointer object
//we need virtual function
#include<iostream>
using namespace std;
class Animal{
	public:
		public:
		virtual void display()=0;//pure virtual
		virtual	~Animal()
		{
			cout<<"Destructor inside Animal"<<endl;
		}
};
class Cow:public Animal{
	public:
		void display(){
			cout<<"Class dervied class cow"<<endl;
		}
			~Cow()
		{
			cout<<"Destructor inside Cow"<<endl;
		}
};
class Dog:public Animal{
	public:
		void display(){
			cout<<"Class derived class Dog"<<endl;
			
		}
		~Dog()
		{
			cout<<"Destructor inside Dog"<<endl;
		}
};
int main()
{
	//pure virtual function normal object cannot be made
	Animal *panm;
	panm=new Cow;
	panm->display();
	delete panm;
	panm=new Dog;
	panm->display();
	delete panm;
	return 0;
}

