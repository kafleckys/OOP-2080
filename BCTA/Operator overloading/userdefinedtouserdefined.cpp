//user defined to user defined 
//WAP to convert gold in tola to gram.make use of
//user defined to user defined conversion
//(11.66 grams = 1 tola)
//1. conversion in destination object use constructor
//2. conversion in source object use operator 
//function
#include<iostream>
using namespace std;
class Tola{
	private:float tola;
	public:Tola(float t) //constructor parameterised
			{
          tola=t;	
	       }
	    float returnTola(){//member function
	    	return tola;
		} 
	
};
class Gram{
	private: float gm;
	public:
		Gram() {gm=0;}//default
		Gram(Tola t1)//constructor for conversion
		{
			gm=t1.returnTola()*11.6;
		}
		void display() {
		cout<<"Gram is"<<gm;
		}
	
};
int main()
{
	Tola t1(3.4); //object initialize
	Gram g1;//it need default constructor
	g1=t1;//destination=source
	g1.display(); //display gram value of g1
	return 0;
}
