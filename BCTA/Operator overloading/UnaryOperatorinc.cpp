//unary operator in OOP
//++a prefix increment
//a++ postfix increment
//returntype operator++
#include<iostream>
using namespace std;
class Time{
	private: int h,m,s;	
	public: 
	//just for nameless object
	Time(int a,int b,int c){
		h=a; m=b; s=c;
	}
	Time()  
	{	}
	void readdata()
	{
		cin>>h>>m>>s;
	}
	void display() {cout<<"Time is"<<h<<":"<<m<<":"<<s;}
	Time operator ++()//prefix
	{
		Time temp;
		temp.h=++h;
		temp.m=++m;
    	temp.s=++s;
		return temp;
	} 
//	Time operator ++(int)//postfix
//	{
//		Time temp;  
//		temp.h=h++;
//		temp.m=m++;
//    	temp.s=s++;
//		return temp;
//	} 
	Time operator ++(int)//postfix
	{
       //nameless object
		h++;
		m++;
    	s++;
		return Time(h,m,s); //it needs constructor
	}
	
	
};
int main()
{
	Time T,T1,T2;
	T.readdata();// 8 10 30
	T.display();  //8 10 30 
	T1=++T;//prefix
	T1.display();  //9 11 31
	T2=T++;//postfix
	T2.display();  //9 11 31
	T2.display();//9 11 31
	T.display();//10 12 32
	return 0;	
}
