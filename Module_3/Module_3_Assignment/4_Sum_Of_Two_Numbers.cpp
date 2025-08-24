/*
4. Setting Up Development Environment 
-> Write a program that asks for two numbers and displays their sum. Ensure this is 
done after setting up the IDE (like Dev C++ or CodeBlocks). 
-> Objective: Help students understand how to install, configure, and run programs in 
an IDE.
*/

#include<iostream>
using namespace std;
class sum
{
	public:
		int n1,n2;
		void add()
		{
			cout<<"Enter a first number: ";
			cin>>n1;
			cout<<"Enter a second number: ";
			cin>>n2;
			cout<<endl;
			cout<<"Sum of two numbers is "<<n1+n2;
		}
};
main()
{
	sum s1;
	s1.add();
}

