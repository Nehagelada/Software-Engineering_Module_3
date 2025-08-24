/*
15. Array Sum and Average 
-> Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results. 
-> Objective: Understand basic array manipulation.
*/

#include<iostream>
using namespace std;
class abc
{
		public:
			void array()
			{
		        int n;
	            int arr[50];
	            int sum = 0;
	            cout<<"How many numbers you want to enter in array: ";
	            cin>>n;
				cout<<"Enter numbers: "<<endl;
	            for (int i=0;i<n;i++)
	            {
	                cin>>arr[i]; 
	                sum+=arr[i]; 
	            }
	
	            cout<<"\nYou entered: "<< endl;
	            for (int i=0;i<n;i++)
	            {
	                cout<<arr[i]<<endl;
	            }
	
	            float avg = (float)sum / n;
	            cout<<"\nSum = "<<sum<< endl;
	            cout<<"Average = "<<avg<< endl;
	        }
};
main()
{
	abc a1;
	a1.array();
}
