//WAP to add 2 complex numbers that has real and 
//imag as data members.Complex is name of class.
//Use binary addition.
#include<iostream>
using namespace std;
class Complex{
	private:float real,imag;
	public:
	Complex(){real=0;imag=0;}	
	Complex(float r,float i){
		real=r; imag=i;
	}
	//display is member function
	void display(){cout<<real<<" "<<imag<<endl;}
friend Complex operator+(Complex,Complex);
};
//using friend function
Complex operator+(Complex A,Complex B)
	{
		Complex temp;
		temp.real=A.real+B.real;
		temp.imag =A.imag+B.imag;
		return temp;
	}
int main()
{
	Complex C1(5,3),C2(4,8),C3;//initialize
	C3=C1+C2;//operator+(C1,C2)
	C3.display();
	return 0;
}

