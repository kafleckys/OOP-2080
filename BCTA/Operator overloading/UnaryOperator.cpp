chapter5 : 
Operator overloading:
	syntax:
		return_type operator op_sym(arg_list)
		{
			//body of function
		}
1. Unary operator overloading(++,--)
for prefix: 
return_type operator op_sym()
{
	//function body
} 
for postfix:
return_type operator op_sym(int)
{
	//function body
}
2. Binary operator overloading(*,+,-,/)
return_type operator op_sym(class_name arg)
{
	//function body
}
A operator+(A x)
{
	//function body
}


Why do we need operator overloading?
for integer values we can add 2 variables like
int a =8;
int b=9;
++a;
int c=a+b;
but incase of objects we can only add them using
operator overloading.
class A{
	
};
int main()
{
	A o1,o2,o3;
	o3=o1+o2; //it needs operator overloading
	++o1; //needs ++ operator overloading
	--o2;//o2 is object -- operator --overload
}

