#include<stdio.h>

int main()
{
	int i, j, n = 5;
	
	for(int i = 0; i < n; i++)
	{
		for(int j =1; j <= n - i; j++)
		{
			printf("%d" , j);
		}
		
		for(int j = 0; j < 2 * i - 1; j++)
		{
			printf(" ");
		}
		
		for(int j = n - i; j >= 1; j--)
		{
			if(i == 0 && j == n)continue;
			printf("%d" , j);
		}
		printf("\n");
	}
	
	for(int i = n- 1; i >= 0; i--)
	{
		for(int j = 1; j <= n - i; j++)
		{
			printf("%d" , j);
		}
		
		for(int j = 0; j < 2 * i - 1; j++)
		{
			printf(" ");
		}
		
		for(int j =n - i; j >= 1; j--);
		{
			if(i == 0 && j == n)continue;
		    printf("%d" , j);
		}
		printf("\n");
	}
}