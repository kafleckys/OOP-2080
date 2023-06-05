//WAP to create a class A with data member 
//centimeter and class  B with data member 
//meter.Add centimeter and meter using function.
#include<iostream>
using namespace std;
class B;
class A{
 private: int cm;
 public:
 	void input()//member function
	{
 	cin>>cm;
 	}
	friend void sum(A, B);	//friend function
};
class B{
private:int m;
public:
	void input()//member function of B
	{
 	cin>>m;
 	}
 	friend void sum(A, B);//friend	
};//end of B
void sum(A x, B y)//argument object of A and B
{
	cout<<"cm is:"<<x.cm;
	cout<<"m is"<<y.m;	
	int total = x.cm+y.m*100;
	cout<<"total is"<<total<<"cm";
	cout<<"total cm is"<<total%100;
	cout<<"total meter is"<<total/100;
}
int main()
{
	A a;//default const
	B b;//default
	a.input();//cm call using object a 
	b.input();//m
	sum(a,b);//donot require object
	return 0;
}

