#include<stdio.h>

int main()
{
	int startYear , endYear;
	
	printf("enter the starting year:");
	scanf("%d" , &startYear);
	
	printf("enter the ending year:");
	scanf("%d" , &endYear);
	
	printf("leap years between %d and %d are :\n" , startYear , endYear);
	
	while(startYear <= endYear)
	{
		if((startYear % 4 ==0 && startYear % 100 != 0) || (startYear % 400 == 0))
		{
			printf("%d\n" , startYear);
		}
		startYear++;
	}
}