/*catching all exception
catch(...)
{
	cout<<"caught all";
}*/

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
		cout<<"character exception";
	}
		catch(...)
	{
		cout<<"caught all exception";
	}
	
}
int main()
{
//  test(1);
	test(3);
//	test(2);
	return 0;	
}
