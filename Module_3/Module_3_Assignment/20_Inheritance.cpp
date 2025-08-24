/*
20. Inheritance Example 
-> Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. 
-> Objective: Learn the concept of inheritance.
*/

#include <iostream>
using namespace std;
class Person 
{
	public:
	    string name;
	    int age;
};

class Student : public Person
{
	public:
	    string grade;
};

class Teacher : public Person 
{
	public:
	    string subject;
};

int main() 
{
    Student s;
    cout << "Enter Student Details" << endl;
    cout << "Enter name: ";
    cin >> s.name;     
    cout << "Enter age: ";
    cin >> s.age;      
    cout << "Enter grade: ";
    cin >> s.grade;

    cout << "--- Student Information ---" << endl;
    cout << "Name: " << s.name <<endl;
	cout<<"Age:"<<s.age<<endl;
	cout<<"Grade is:"<<s.grade<<endl; 
    cout<<endl;     
	
    Teacher t;
    cout << "Enter Teacher Details" << endl;
    cout << "Enter name: ";
    cin >> t.name;   
    cout << "Enter age: ";
    cin >> t.age;
    cout << "Enter subject: ";
    cin >> t.subject;

    cout << "--- Teacher Information ---" << endl;
    cout << "Name: " << t.name <<endl;
	cout<<"Age:"<<t.age<<endl;
	cout<<"Subject is:"<<t.subject<<endl; 

    return 0;
}

