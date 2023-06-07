//static data and functions in C++
//static data must be initialize outside
//class 
//static functions are class level function and 
//can be called through class name
#include<iostream>
using namespace std;
class ABC{
	private: int a; static int b;
	public:ABC() {
		a=0;
		b++;
		a++;
		cout<<"object "<<b<<"created"<<endl;
	}
static void display()
	{
//		cout<<"a is"<<a;
		cout<<"b is"<<b<<endl;
	}	
	~ABC(){
		cout<<"object"<<b<<"destroyed";
		b--;
		}
};
int ABC::b=0; //static outside class
int main(){
//    ABC person1;
//	person1.display();	
//	ABC person2;
//	person2.display();
//	ABC person3;
//	person3.display();
ABC::display();
ABC::display();
//	ABC person4;
	return 0;
}
