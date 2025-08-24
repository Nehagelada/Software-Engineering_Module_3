/*
12. Simple Calculator Using Functions 
-> Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input. 
-> Objective: Practice defining and using functions in C++.
*/

#include<iostream>
using namespace std;
class calculator
{
	public:
		void add()
		{
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Addition of two numbers is "<<(n1+n2)<<endl;
		}
		void sub()
		{
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Subtraction of two numbers is "<<(n1-n2)<<endl;
		}
		void mul()
		{
			int n1,n2;
			cout<<"Enter a first value: ";
			cin>>n1;
			cout<<"Enter a second value: ";
			cin>>n2;
			cout<<"Multiplication of two numbers is "<<(n1*n2)<<endl;
		}
		void div()
		{
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
	char ch;
	cout<<"-----Simple Calculator-----"<<endl;
	cout<<"Choose the Operator From that '+','-','*','/'"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '+':
			c1.add();
			break;
		case '-':
			c1.sub();
			break;
		case '*':
			c1.mul();
			break;
		case '/':
			c1.div();
			break;
		
	}
}
