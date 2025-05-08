#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter A:");
	scanf("%d" ,&a);
	
	printf("Enter B:");
	scanf("%d" ,&b);
	
	printf("Enter C:");
	scanf("%d" ,&c);

	if(a>b)
	{
		if(a>c)
		   {
		   	printf("%d is minimum number" ,a);
		   }
		else
		   {
		   	printf("%d is minimum number" ,c);
		   }
	}
	else
	{
		if(b>c)
		   {
		   	printf("%d is minimum number" ,b);
		   }
		else
		   {
		   	printf("%d is minimum number" ,c);
		   }
		
	}
}