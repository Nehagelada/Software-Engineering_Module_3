/*
11. Nested Control Structures 
-> Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
-> Objective: Learn nested control structures. 
*/

#include<iostream>
using namespace std;
class nested
{
	public:
		void star()
		{
			int row;
			cout<<"Enter a row number to print a star: ";
			cin>>row;
			cout<<endl;
			for(int i=1;i<=row;i++)
			{
				for(int j=1;j<=row;j++)
				{
					if(j>row-i)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<endl;
			}
			
		}
	
};
main()
{
	nested n1;
	n1.star();
}
