#include<stdio.h>

int main()
{
	int x,y,result;
	
	printf("Enter value for x:");
	scanf("%d", &x);
	
	printf("Enter value for y:");
	scanf("%d", &y);
	
	result=(x-y)*(x-y);
	
	printf("the result of (x-y)*(x-y) is: %\n" , result);
}