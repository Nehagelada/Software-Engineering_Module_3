/*
5.Variables and Constants 
-> Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
 
-> Objective: Understand the difference between variables and constants.
*/

#include<iostream>
using namespace std;
const float PI = 3.14;
class operation
{
	public:
		int radius;
		float n1,n2,sum;
		char name[20];
		double m1,m2,mul;
		void area()
		{
			cout<<"Enter a Radius ";
			cin>>radius;
			cout<<"Area of a Circle "<<PI*radius*radius<<endl;
			cout<<"-----------------------------"<<endl;
		}
		void add()
		{
			cout<<"Enter a fist value ";
			cin>>n1;
			cout<<"Enter a second value ";
			cin>>n2;
			sum=n1+n2;
			cout<<"Sum of two numbers is "<<sum<<endl;
			cout<<"-----------------------------"<<endl;
		}
		void display()
		{
			cout<<"Enter your name ";
			cin>>name;
			cout<<"Your name is "<<name<<endl;
			cout<<"-----------------------------"<<endl;
		}
		void multiply()
		{
			cout<<"Enter a fist value ";
			cin>>m1;
			cout<<"Enter a second value ";
			cin>>m2;
			mul=m1*m2;
			cout<<"Multiply of two numbers is "<<mul<<endl;
			cout<<"-----------------------------"<<endl;
		}
		
};
main()
{
	operation o1;
	o1.area();
	o1.add();
	o1.display();
	o1.multiply();
}
