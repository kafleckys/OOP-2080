//friend class
#include<iostream>
#include<string.h>
using namespace std;
class falful{
	private:char apple[50];
	public: falful( char x[]){
		strcpy(apple,x);
	}
	friend class sabji;//friend class

};
class sabji{
	private: int orange;
	public:
//		sabji(int ora){orange=ora;}//parameterised
		sabji(int ora):orange(ora){}
		//parameterised member initialization list
		
		void display(falful x){
			cout<<x.apple<<orange;
		}
};
int main()
{
	sabji b(12);
	falful object1("red colour");
	b.display(object1);
	return 0;
}
