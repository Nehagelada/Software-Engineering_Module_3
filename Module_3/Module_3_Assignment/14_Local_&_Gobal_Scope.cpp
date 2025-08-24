/*
14. Variable Scope 
-> Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. 
-> Objective: Reinforce the concept of variable scope.
*/

#include<iostream>
using namespace std;
int global_var=100;
class scope
{
		public:
			void display()
			{
				//Local Variables
				int a=10;
				cout<<"Local Variable is "<<a<<endl;
				cout<<"Global Variable is "<<global_var<<endl;
			}
			void modify_global_variable()
			{
				global_var += 50;
				cout<<endl;
				cout<<"Global Variable after modification is "<<global_var<<endl;
			}
};
main()
{
	scope s1;
	s1.display();
	s1.modify_global_variable();
}

