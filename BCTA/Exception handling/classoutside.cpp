#include<iostream>
using namespace std;
class RERR{};
class student{
	private: char name[15];
				int rn;
	public:
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
	}catch(RERR)
	{
		cout<<"roll error";
	}
	
	
	return 0;
}
