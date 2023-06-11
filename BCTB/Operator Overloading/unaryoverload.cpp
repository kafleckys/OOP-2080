//unary operator overload
//++ 
//prefix ++a
//postfix b++
//syntax:
	//prefix
//	ret_type operator++()//this dont work for both
//	{
//		//function body
//	}
//    //postfix
//    ret_type operator++(int)
//	{
//		//function body
//	}

//WAP to create a class distance with 
//data members ft and inch. Use ++ operator
//and increment value of distance.
//Distance operator++()
//{
//	
//}
//Distance operator++(int) //postfix
//{
//	
//}
#include<iostream>
using namespace std;
class Distance{
	private: float f,i;
	public:Distance(float a,float b){
	f=a;i=b;
	} 
	Distance(){}
	void display() {
		cout<<"feet"<<f<<"inch"<<i;
	} 	
	Distance operator++()
    {
      Distance d;
	  d.f=++f;
	  d.i=++i;
	  return d;
    } 
    
    Distance operator++(int)
    {
      Distance d;
	  d.f=f++;
	  d.i=i++;
	  return d;
    } 	
};
int main(){
	Distance d1(5,6),d2,d3;
	d1.display();//5,6
	d2=++d1;//d1.operator++
	d1.display();//6 7
	d2.display();//6 7
	d3=d1++;
	d1.display();//7 8 
	d3.display();//6 7
	
	
	return 0;	
}


