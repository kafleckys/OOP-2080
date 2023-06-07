//WAP that explain friend as bridge. OR
//Create a class A with data member cm. Create
//class B with data member m. Add cm and m using
//friend function
#include<iostream>
using namespace std;
class B;
class A{
	private :int cm;
	public:void readdata(){
		cin>>cm;
	}
friend	void sum(A,B);
};
class B{
	private:int m;
	public:
		void readdata(){
		cin>>m;
	}
	friend	void sum(A,B );
};
void sum(A o1,B b1)
{
//	cout<<"cm is"<<o1.cm;
//	cout<<"m is"<<b1.m;
	int totalcm = o1.cm+b1.m*100;
	cout<<"total cm is"<<totalcm;
	cout<<"total m is"<<totalcm/100;
	cout<<"total cm is"<<totalcm%100;
}

int main()
{
	A o1;
	o1.readdata();
	B b1;
	b1.readdata();
	sum(o1,b1);
	return 0;
}
