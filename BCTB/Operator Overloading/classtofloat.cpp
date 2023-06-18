//conversion from user to basic
//WAP to convert from cel to fahrenheit.
//input :cel class
//output : fahrenheit float
#include<iostream>
using namespace std;
class Cel{
	private: float c;
	public:
		Cel(float f)
		{
			c=f;
		}
     	operator float()
		{
		float f;
		f=c*9/5+32;	
		return f;
		}
};
int main(){
	Cel C1(37);
	float f1;
	f1=C1; //class to float
	cout<<"Answer is"<<f1;
	return 0;
}

