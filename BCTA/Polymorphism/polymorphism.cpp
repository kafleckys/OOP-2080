//Pointer 
#include<iostream>
using namespace std;
class Test1{
	int marks;
	public:
		void readdata() 
		{
			cin>>marks;
		}
		void display()
		{
			cout<<"Marks is"<<marks;
		}
};
int main(){
	Test1 *t;
	t=new Test1;
	t->readdata();
	t->display();
	delete t;
	return 0;
}
////static method 
//Test1 *t;//pointer
//	Test1 t1;//normal
//	t1.readdata();
//	t=&t1;//update 
//	t1.display();
//	t->display();


//statically or dynamically (new)
//int *p;
//	int a=78
//	p=&a;
//	*p=a;
