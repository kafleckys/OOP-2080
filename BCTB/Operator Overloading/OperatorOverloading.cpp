Operator overloading :
	unary : ++ --
	binary: a+b a-b a*b 
Why we need operator overloading?
int a=5,b=10,c;
c=a+b; is valid
+=a;

class A{	};
A a(4,5),b(4,2),c;
c=a+b;//operator overloading
++c;
For operator overloading we need function.
1.member function
2.friend function

syntax for operator overloading:
	return_type operator op_sym(arguments)
	{
		//function body
	}



 



