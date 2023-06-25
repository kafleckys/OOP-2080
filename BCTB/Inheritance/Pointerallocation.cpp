//WAP to create a class Test with marks as data member.
//Make pointer type object variable assign address
//and display value of marks.
#include<iostream>
using namespace std;
class Test{
	private:float marks;
	public:void readdata(){
		cin>>marks;
	}
	void display(){
		cout<<"marks is"<<marks;
	}
};
int main(){
//MEthod 1	
//Test t;
//	Test *p;
//	p=&t;
//	t.readdata();
//	t.display();//normal
//	p->display();//pointer

//MEthod 2
    Test *p;
    p=new Test;//memory allocation
    p->readdata();
    p->display();
	return 0;
}

