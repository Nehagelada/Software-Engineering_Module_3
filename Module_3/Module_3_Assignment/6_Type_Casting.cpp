/*
6. Type Conversion 
-> Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. 
-> Objective: Practice type casting in C++. 
*/

#include<iostream>
using namespace std;
class abc
{
	public:
	  	
    	 void implicit()
    	 {
    	 	int a = 10;
    	 	float b = 3.5;
    	 	float result = a + b; // int a automatically converted to float
    	 	cout<<"Implicit Type Casting"<<endl;
    	 	cout<<"a(int): "<<a<<endl;
    	 	cout<<"b (float): "<<b<<endl;
    	 	cout<<"a+b (float result): "<<result<<endl;
		 }
		 
		
		 void explicitt()
		 {
		 	double x = 10.75;
    	 	int y = (int)x; // x is converted into int and stored into y in int datatype 
		 	cout<<"-----------------------"<<endl;
		 	cout<<"Explicit Type Casting"<<endl;
		 	cout<<"x(double): "<<x<<endl;
		 	cout<<"y(int): "<<y<<endl;
		 }
		
		
};
main()
{
	abc a1;
	a1.implicit();
	a1.explicitt();
}
