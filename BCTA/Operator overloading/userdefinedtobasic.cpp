//conversion from ud to basic
//overload operator function
//WAP to convert from celcius to fahrenheit.Use
//conversion from user defined to basic type 
//input: celciusn ud class
//output :float type basic
#include<iostream>
using namespace std;
class Celcius{
	private:float cel;
	public:
		void readdata() {
			cin>>cel;
		}
		operator float()//special function
		{
		  float f;
		  f=cel*9/5+32; //object C1 value comes automatically
		  return f;	
		}
};
int main(){
	Celcius C1;
	float f;
	C1.readdata();
	f=C1;//float = Celcius;  need operator
	cout<<"Fahrenheit is:"<<f;
	return  0;
}

