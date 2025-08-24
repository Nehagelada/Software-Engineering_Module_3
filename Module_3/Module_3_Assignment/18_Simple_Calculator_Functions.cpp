/*
18. Class for a Simple Calculator 
-> Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions. 
-> Objective: Introduce basic class structure.
*/

#include<iostream>
using namespace std;
class calculator
{
	public:
		void add()
		{
			cout<<"----------Addition----------"<<endl;
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Addition of two numbers is "<<(n1+n2)<<endl;
		}
		void sub()
		{
			cout<<endl;
			cout<<"----------Subtraction----------"<<endl;
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Subtraction of two numbers is "<<(n1-n2)<<endl;
		}
		void mul()
		{
			cout<<endl;
			cout<<"----------Multiplication----------"<<endl;
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Multiplication of two numbers is "<<(n1*n2)<<endl;
		}
		void div()
		{
			cout<<endl;
			cout<<"----------Division----------"<<endl;
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			if(n2 != 0)
			{
				cout<<"Division of two numbers is "<<(n1/n2)<<endl;
			}
			else
			{
				printf("Division are not possible because (b=0)\n");
			}
			cout<<endl;
		}
		
};
main()
{
	calculator c1;
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
}
