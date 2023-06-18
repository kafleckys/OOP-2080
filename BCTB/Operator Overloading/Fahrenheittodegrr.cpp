//WAP to convert Fahrenheit to degree 
//celcius.Show use of data conversion from
//basic to user defined type
//input Fahrenheit float
//output class  celcius
#include<iostream>
using namespace std;
class Btu{
	private: float cel;
	public:
		Btu() {} //default
		Btu(float f)//constructor used for conversion
		{
	     cel=(f-32)*5/9;
		}
		void display() //member function
		{
			cout<<"Celcius is"<<cel;
		}
};
int main(){
	float f;
	Btu b;//default
	cout<<"enter fahrenheit";
	cin>>f;
	b=f; //float to class constructor call
	b.display();//calls function
	return 0;
}

