#include<stdio.h>

int main()
{
	int i, j;
	int rows = 5;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf("%d" , j);
		}
		
		for(j = 0; j < 2 * i - 1; j++)
		{
			printf(" ");
		}
		for(j = rows - i; j >= 1; j--)
        {   
			if(i ==0 && j == rows - i)continue;
			    printf("%d" , j);
		}
		printf("\n");
	}
}