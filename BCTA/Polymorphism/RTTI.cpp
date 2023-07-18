//Run time type information 
//dynamic_cast 
//type_id
#include<iostream>
#include<typeinfo>
using namespace std;
class Animal
{
	public:
virtual	void display()
		{
			cout<<"function display inside Animal"<<endl;
		}
};
class cow:public Animal{
	void display()
		{
			cout<<"function display inside cow"<<endl;
		}
};
//class dog:public Animal{
//};

int main()
{
	Animal *anm;
	cow *cp;
	Animal a1;
	cout<<"a1 type is"<<typeid(a1).name()<<endl;
	anm=&a1;
	anm->display();
	//typeid helps to determine where anm is pointing to
	cout<<"*anm point to: "<<typeid(*anm).name()<<endl;
	//here anm is pointing address of anm so casting is not successful
	cp=dynamic_cast<cow*>(anm);//use dynamic_cast to convert Animal* to cow*
	if(cp)
	{
		cout<<"cast success"<<endl;
	}
	else{
		cout<<"cast failed"<<endl;
	}


	cow c1;
	anm=&c1;
	anm->display();//call display inside cow
	//here anm is pointing address of c1 so casting is successful
	cp=dynamic_cast<cow*>(anm);
	if(cp)
	{
		cout<<"cast success"<<endl;
	}
	else{
		cout<<"cast failed"<<endl;
	}
		//typeid helps to determine where anm is pointing to
	cout<<"now *anm point to"<<typeid(*anm).name();
	
	return 0;
}
//output
//6Animal mean 6 characters in Animal
