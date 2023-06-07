//Create a class complex that has real and imag
//as data members. Use friend function to add
//2 complex numbers stored in object.
#include<iostream>
using namespace std;
class complex{
	private: float real,imag;
	public:
		complex(){}
		complex(float r,float i)
		{
			real=r;
			imag=i;
		}
		void display() {
			cout<<"number"<<real<<" + "<<imag<<" i"<<endl;
		}
	friend complex sum(complex,complex);
};
complex sum(complex x,complex y)
{
	complex temp;
	temp.real =x.real+y.real;
	temp.imag=x.imag+y.imag;
    return temp;
}
int main()
{
	complex c1(4,5),c2(4,6),c3;
	c1.display();
	c2.display();
	c3 =sum(c1,c2);
	c3.display();
	return 0;
}
