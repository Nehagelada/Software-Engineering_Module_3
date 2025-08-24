/*
17. String Palindrome Check 
-> Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). 
-> Objective: Practice string operations. 
*/

#include<iostream>
#include<string.h>
using namespace std;
class abc 
{
		public:
			void palidrome()
			{
				cout<<"-------String Palidome-------"<<endl;
				char str[100];
				int length,k=0;
				cout<<"Enter a string:-  ";
				gets(str);
				length=strlen(str);
				length=length-1;
				//while is used to check the string palindrome
				while(length>k)
				{
					if(str[length]!=str[k])
					{
						cout<<"String is not a palidrome";
						//exit(0);
						break;
					}
					length--;
					k++;
				}
				cout<<"String is a palidrome";
			}
};
main()
{
	abc a1;
	a1.palidrome();
}
