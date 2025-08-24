/*
13. Factorial Calculation Using Recursion 
-> Write a C++ program that calculates the factorial of a number using recursion. 
-> Objective: Understand recursion in functions. 
*/

#include<iostream>
using namespace std;
class recursion
{
	public:
		int fact(int num)
		{
			if(num == 0)
			{
				return 1;
			}
			int factnm1=fact(num - 1);
			int factn = factnm1*num;
			return factn;
		}
};
main()
{
	recursion r1;
	int num;
	cout<<"Enter a number for Factorial:- ";
	cin>>num;
	cout<<"Factorial is "<<r1.fact(num);
}
