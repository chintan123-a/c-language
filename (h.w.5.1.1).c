#include<stdio.h>

int main()
{
	int c ,d;
	
	printf("Enter the first number:c");
	scanf("%d" , &c);
	
	printf("Enter the second number:d");
	scanf("%d" , &d);
	
	if(c<d){
		printf("The minimum number is:%d\n" , c);
	}
	else{
		printf("The minimum number is:%d" , d);
	}
}
/*
input:c=15
      d=10
output=10
*/