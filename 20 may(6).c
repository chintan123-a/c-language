#include<stdio.h>

int main()
{
	int i , j;
	int rows = 5;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf(" ");
		}
		
		for(j = 5; j > i; j--)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
}