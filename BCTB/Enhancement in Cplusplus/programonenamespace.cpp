//WAP to calculate area of circle and square 
//using function
//namespace: 
#include<iostream>
using namespace std;
namespace ABC{
	void area(float r)//circle
	{
	cout<<3.14*r*r;
	}
}
namespace XYZ{
	void area(float l)
	{
	cout<<l*l;
	}
}
int main(){
	float r,l;
	cin>>r>>l;
	ABC::area(r);//circle
	cout<<endl;
	XYZ::area(l);//square
	return 0;
	} 

