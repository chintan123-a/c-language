#include<stdio.h>

int main()
{
	float  mark1, mark2, mark3,
	       average;
	       
	printf("Enter mark for subject 1:");
	scanf("%f" ,&mark1);
	
	printf("Enter mark for subject 2:");
	scanf("%f" ,&mark2);
	
	printf("Enter mark for subject 3:");
	scanf("%f" ,&mark3);
	
	   average = (mark1+ mark2 + mark3)/3;
	
	printf("The average mark is :%.2f\n" , average);
}

   
