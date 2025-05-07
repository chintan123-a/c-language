#include<stdio.h>

int main()
{ 
    int a;
    
    printf("Enter a number:");
    scanf("%d" , &a);
    
    if (a<0)
	{
	     printf("a is negatuve number\n");
    }
    else if(a>0)
	{
    	printf("a is positive number\n");
	}
	else if(a=0)
	{
		printf("a is neutral number\n");
	}
}