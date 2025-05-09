#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter a:");
	scanf("%d" ,&a);
	
	printf("enter b:");
	scanf("%d" ,&b);
	
	printf("enter c:");
	scanf("%d" ,&c);
	
	   int min = (a<b) ? ((a<c) ? a : c): ((b<c) ? b : c);
	            
	    printf("the minimum number is: %d\n" , min);
}