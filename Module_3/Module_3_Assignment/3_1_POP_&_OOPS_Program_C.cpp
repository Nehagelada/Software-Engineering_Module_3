/*
3. POP vs. OOP Comparison Program 
-> Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. 
->Objective: Highlight the difference between POP and OOP approaches.
*/

// C programming

#include<stdio.h>
main()
{
	int length,breadth;
	printf("Enter a Length of Rectangle: ");
	scanf("%d",&length);
	printf("Enter a Breadth of Rectangle: ");
	scanf("%d",&breadth);
	printf("\n");
	printf("Area of Rectangle is %d ",length*breadth);
}
