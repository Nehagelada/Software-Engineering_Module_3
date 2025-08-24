/*
7. Operator Demonstration 
-> Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
operators. Perform operations using each type of operator and display the results. 
-> Objective: Reinforce understanding of different types of operators in C++. 
*/

#include<iostream>
using namespace std;
class operators
{
	public:
		void arithmetic()
		{
			int a,b;
			cout<<"---------Arithmetic Operators---------"<<endl;
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"Enter Second Value: ";
			cin>>b;
			cout<<endl;
			cout<<"a+b= "<<a+b<<endl;
			cout<<"a-b= "<<a-b<<endl;
			cout<<"a*b= "<<a*b<<endl;
			if(b != 0)
			{
				cout<<"a/b= "<<a/b<<endl;
				cout<<"a%b= "<<a%b<<endl;
			}
			else
			{
				printf("Division and Modulus are not possible because (b=0)\n");
			}
			cout<<endl;
		}
		void relational()
		{
			int a,b;
			cout<<"---------Relational Operators---------"<<endl;
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"Enter Second Value: ";
			cin>>b;
			cout<<endl;
			cout<<"0 -> False"<<endl<<"1 -> True"<<endl;
			cout<<"a>b: "<<(a>b)<<endl;
			cout<<"a<b: "<<(a<b)<<endl;
			cout<<"a<=b: "<<(a<=b)<<endl;
			cout<<"a>=b: "<<(a>=b)<<endl;
			cout<<"a==b: "<<(a==b)<<endl;
			cout<<"a!=b: "<<(a!=b)<<endl;
			cout<<endl;
		}
		void logical()
		{
			int a,b;
			cout<<"---------Logical Operators---------"<<endl;
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"Enter Second Value: ";
			cin>>b;
			cout<<endl;
			cout<<"0 -> False"<<endl<<"1 -> True"<<endl;
			cout<<"a && b: "<<(a&&b)<<endl;
			cout<<"a || b: "<<(a||b)<<endl;
			cout<<"a != b: "<<(a!=b)<<endl;
			cout<<endl;
		}
		void bitwise()
		{
			int a,b;
			cout<<"---------Bitwise Operators---------"<<endl;
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"Enter Second Value: ";
			cin>>b;
			cout<<endl;
			cout << "a & b = " << (a & b) << endl;   // AND
    		cout << "a | b = " << (a | b) << endl;   // OR
    		cout << "a ^ b = " << (a ^ b) << endl;   // XOR
    		cout << "~a = " << (~a) << endl;         // NOT
    		cout << "a << 1 = " << (a << 1) << endl; // Left Shift
    		cout << "a >> 1 = " << (a >> 1) << endl; // Right Shift
			cout<<endl;
		}
};
main()
{
	operators o1;
	o1.arithmetic();
	o1.relational();
	o1.logical();
	o1.bitwise();
}
