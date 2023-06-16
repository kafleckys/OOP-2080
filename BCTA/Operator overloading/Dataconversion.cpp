//Last class:
//	operator overloading done.
//Why do we need operator overloading?
//Homework:
//	1.Create a class distance with data members
//	feet and inch. Compare distance using 
//	operator overloading.
//	(>,<,==)
//   2. Solve Tola gram program using operator conversion
//   function.
Data conversion:
1. Conversion between basic type (int,float,double)
     int a=90;
	 float b=a;//automatic
	 
	 float c=9.9;
	 int d;
//	 d=(int)c;  C style
	 d=static_cast<int>c;  //C++ style
	 
2. Conversion between basic(int,float) 
   and user defined(class)
   2.1 Basic to user defined
   class A{...};//user defined
   int main()
   {
   	int a=12;
   	A a1; //A class a1 object
   	a1=a;//need conversion needs constructor
	}	 
	2.2 User defined to basic
	class B{..};
	int main()
	{
		B b1;
		b1.readdata();
		float c;
		c=b1;//user defined to basic 
		//needs overloaded conversion operator
//		function
	}
	2.3 User defined to user defined
	one class to another
	class A{
	};
	class B{
	};
	int main(){
		A a1;  B b1;
		a1=b1;//conversion 
		solution : constructor OR overloaded
		operator function
	}

	 
	 
	 	
	

