/*
8. Grade Calculator 
-> Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. 
-> Objective: Practice conditional statements (if-else).
*/

#include<iostream>
using namespace std;
class grade
{
	public:
		void show()
		{
			int marks;
			cout<<"Enter your marks: ";
			cin>>marks;
			cout<<endl;
			cout<<"-----Your Grade-----"<<endl;
			if(marks<=100 && marks>=90)
			{
				cout<<"Grade A+";
			}
			else if(marks>=80 && marks<=89)
			{
				cout<<"Grade A";
			}
			else if(marks>=70 && marks<=79)
			{
				cout<<"Grade B";
			}
			else if(marks>=60 && marks<=69)
			{
				cout<<"Grade C";
			}
			else if(marks>=50 && marks<=59)
			{
				cout<<"Grade D";
			}
			else 
			{
				cout<<"Fail";
			}
			
		}
		
}; 
main()
{
	grade g1;
	g1.show();
}
