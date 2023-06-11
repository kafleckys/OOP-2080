//WAP to add 2 complex numbers using friend function
//operator overloading.
#include<iostream>
using namespace std;
class Complex{
	private: float real,imag;
	public:Complex(float a,float b)
			{
				real=a; 
				imag=b;
			}
			Complex() {}//default
			void display() {
				cout<<"real"<<real<<"imaginary"<<imag;
			}
	friend Complex operator+(Complex x,Complex y);			
};
Complex operator+(Complex x,Complex y)
		{
				Complex temp;
				temp.real=x.real+y.real;
				temp.imag=x.imag+y.imag;
				return temp;
		}
int main(){
	Complex C1(4,5),C2(3,5),C3;
	C3=C1+C2;//operator+(C1,C2)
	C1.display();
	C2.display();
	C3.display();
	return 0;

}
