#include<stdio.h>

int main()
{
	int x ,y,result;
	
    printf("Enter value of x:");
	scanf("%d", &x);
	
	printf("Enter value of y:");
	scanf("%d", &y);
	
	result=(x+y)*(x+y)*(x+y);
	
	printf("The result of (x+y)*(x+y)*(x+y) is: %d\n",result);
}
/*
input:x=35
      y=15
output:result=125000
*/