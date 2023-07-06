//multiple catch
#include<iostream>
using namespace std;
void test(int i)
{
	try
	{
		if(i==1) throw 'e';
		else if(i==2) throw 1.0;
		else if(i==3) throw 1;
	}
	catch(char c)
	{
		cout<<"caught character exception";
	}
	catch(int a)
	{
		cout<<"caught integer exception";
	}
	catch(double d)
	{
		cout<<"error due to double value";
	}
}
int main()
{
	test(1);
	test(2);
	test(3);
	return 0;	
}
