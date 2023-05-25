//WAP to calculate average and sum of 
//n numbers.  DMA Dynamic memory allocation
////new delete
//int *p;//pointer variable
//p=new int;//memory allocate
//delete p;//
#include<iostream>
using namespace std;
int main()
{
	int *num,n,i,sum=0;
	cout<<"Enter value of n";
	cin>>n;
	num=new int;
	cout<<"enter elements:";
	for(i=0;i<n;i++)
		{
			cin>>num[i];
		}
	for(i=0;i<n;i++)
		{
			sum=sum+num[i];
		}
	cout<<"sum is"<<sum<<endl;
	cout<<"average is"<<sum/n;
	delete num;
	return 0;
}
