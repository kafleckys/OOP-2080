//WAP to create a class student with data member name,
//rollnum.Throw exception if rollnum is negative.

#include<iostream>
#include<string.h>
using namespace std;

class stu
{
	private:
		char name[25];
		int rn;
	public:
		class error{
	public:
		int r;char msg[50];
		error(int rn,char str[50])
		{
			r=rn;
			strcpy(msg,str);
			}
	};
	
	void getdata()
	{
	
		gets(name);
		cin>>rn;
		if(rn<0)
		throw error(rn,"you enter negative value");//throwing object of class error
	}
	void display()
	{
		cout<<"information"<<name<<rn;
	}
};
int main()
{
	stu s1;
	try{
	s1.getdata();
	s1.display();
    }catch(stu::error  obj)
    {
    	cout<<obj.msg<<"you enter"<<obj.r<<"which is negative";
	}
	return 0;
}
