//wAp to find largest value in array 
//use class .read values using function
//readvalue and find max using function find_max.
#include<iostream>
using namespace std;
//template type and non template type
template<class T,int n=5>
class Array{
	private:T num[20];
	public:
		void readvalue(){
			for(int i=0;i<n;i++)
			{ 
				cin>>num[i];
			}
		}
		
		T max_value(){
			T m=num[0];//first value
			for(int i=1;i<n;i++)
			{
				if(num[i]>m)
				m=num[i];
			}
			return m;
		}
};
int main(){
	Array <int>o1;
	o1.readvalue();
	cout<<"max value is"<<o1.max_value();
	Array <float,3>f1;
	f1.readvalue();
	cout<<"max value is"<<f1.max_value();
	Array <char>c1;//for template
	c1.readvalue();
	cout<<"max value is"<<c1.max_value();
	return 0;
}

