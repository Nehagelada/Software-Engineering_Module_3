/*
10. Multiplication Table 
-> Write a C++ program to display the multiplication table of a given number using a 
for loop. 
-> Objective: Practice using loops.
*/

#include<iostream>
using namespace std;
class abc
{
	public:
		void table()
		{
			int n;
			cout<<"Enter a number to a print table: ";
			cin>>n;
			cout<<endl;
			for(int i=1;i<=10;i++)
			{
				cout<<n<<"*"<<i<<"="<<n*i<<endl;
			}
		}	
};
main()
{
	abc a1;
	a1.table();
}
