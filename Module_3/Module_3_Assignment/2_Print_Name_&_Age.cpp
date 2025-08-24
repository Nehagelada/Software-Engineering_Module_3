/*
2. Basic Input/Output 
-> Write a C++ program that accepts user input for their name and age and then 
displays a personalized greeting. 
-> Objective: Practice input/output operations using cin and cout. 
*/

#include<iostream>
using namespace std;
main()
{
	char name[100];
	int age;
	cout<<"Enter a name: ";
	cin>>name;
	cout<<"Enter a Age: ";
	cin>>age;
	cout<<endl;
	cout <<"Name is: "<<name<<endl;
	cout<<"Age is: "<<age<<endl;
	
}
