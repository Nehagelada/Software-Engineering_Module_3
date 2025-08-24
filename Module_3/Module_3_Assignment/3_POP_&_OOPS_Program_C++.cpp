/*
3. POP vs. OOP Comparison Program 
-> Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. 
->Objective: Highlight the difference between POP and OOP approaches.
*/

//C++ program

#include<iostream>
using namespace std;
class area
{
	public:
		double length,breadth;	
		void data()
		{
			cout<<"Enter the Length of Rectangle: ";
			cin>>length;
			cout<<"Enter the Breadth of Rectangle: ";
			cin>>breadth;
			cout<<endl;
			cout<<"Area of Rectangle is:"<<length*breadth<<endl;
		}
		
}; 
main()
{
	area a1;
	a1.data();
}
