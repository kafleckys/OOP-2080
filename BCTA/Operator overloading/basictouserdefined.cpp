//WAP to Convert Fahrenheit to celcius. Make use
//of conversion from basic type to object.
//C=(F-32)*5/9
//input F float 
//output class type
#include<iostream>
using namespace std;
class Temp{
	private:float cel;
	public:
		Temp() {}
		Temp(float f)
		{
			cel=5.0/9*(f-32);
		}
		void display(){
			cout<<"celcius is"<<cel;
		}	
};
int main()
{
	float f;
	Temp t;
	cout<<"enter f";
	cin>>f;
	t=f;//t calls constructor
	t.display();
	return 0;
}
