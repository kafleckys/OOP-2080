#include<iostream>
using namespace std;
class student{
	private: char name[15];
				int rn;
	public:
		class RERR{};
		void readdata()
		{
			cin>>name>>rn;
			if(rn<0) throw RERR();//object
		}
		void display()
		{
			cout<<"name is"<<name<<"roll"<<rn<<endl;
		}
};
int main()
{
	student s;
	try{
		s.readdata();
		s.display();
	}catch(student::RERR)
	{
		cout<<"roll error";
	}
	
	
	return 0;
}
