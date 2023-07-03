#include<iostream>
using namespace std;
class ROLLERR{};
class student{
	private:char name[20];int rn;
	public:
		void getdata()
		{
			cin>>name>>rn;
			if(rn<0) throw ROLLERR(); // it throws object
		}
		void display()
		{
			cout<<name<<rn;
		}
};
int main()
{
	student s1;
	try{
		s1.getdata();
	   s1.display();
	}catch(ROLLERR e)
	{
		cout<<"negative roll number error";
	}
	return 0;
}
