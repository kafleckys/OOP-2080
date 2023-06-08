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
	//operator overloading X ko thauma C2
	Complex operator+(Complex X)//member func
	{
		Complex temp;
		temp.real=real+X.real;//
		temp.imag = imag+X.imag;
		return temp;
	}
	//display is member function
	void display(){cout<<real<<" "<<imag<<endl;}
};
int main()
{
	Complex C1(5,3),C2(4,8),C3;//
	C3=C1+C2;//C1.operator+(C2)
	C3.display();
	return 0;
}

