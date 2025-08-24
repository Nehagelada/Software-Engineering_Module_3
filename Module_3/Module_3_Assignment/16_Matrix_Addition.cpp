/*
16. Matrix Addition 
-> Write a C++ program to perform matrix addition on two 2x2 matrices. 
-> Objective: Practice multi-dimensional arrays. 
*/

#include<iostream>
using namespace std;
class array
{
		public:
			void matrix()
			{
				int A[2][2],B[2][2],add[2][2];
				cout<<"Enter elements of first matrix (A) "<<endl;
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						cin>>A[i][j];
					}
				}
				cout<<endl;
				cout<<"Enter elements of second matrix (B) "<<endl;
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						cin>>B[i][j];
					}
				}
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						add[i][j]=A[i][j]+B[i][j];
					}
				}
				cout<<"---------------------------------"<<endl;
				cout<<"Addition of two matrix is (add=A+B) "<<endl;
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						cout<<add[i][j]<<"\t";
					}
					cout<<endl;
				}
			}
		
};
main()
{
	array a1;
	a1.matrix();
}
