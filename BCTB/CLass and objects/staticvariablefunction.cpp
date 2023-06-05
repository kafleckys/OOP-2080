//Static variables and static function in C++
//example of static data 
#include<iostream>
#include<conio.h>
using namespace std;
class ABC{
	private:
	 int a;
	 static int b;
	public:
		ABC(){
		a=10;	
		a++;
		cout<<"object"<<b<<"created";
		b++;
		
		}
	void display() //non static function
	{
		cout<<"value of a"<<a<<endl;
		cout<<"value of b"<<b<<endl;
	}
////
//static void display() //static function
//	{
////		cout<<"value of a"<<a<<endl;
//		cout<<"value of b"<<b<<endl;
//	}
	~ABC(){
		b--;
		cout<<"object"<<b<<"destroyed";
		getch();
	}
	 };
 int ABC::b=1;//define static variable outside class
int main()
{
//	ABC a1;
//	a1.display();
//	ABC b1;
//	b1.display();
//	ABC c1;
//	c1.display();
ABC::display();
	return 0;
}
