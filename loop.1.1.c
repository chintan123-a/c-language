#include<stdio.h>

int main()
{
    int number , count=0;
    
    printf("enter a number: ");
    scanf("%d" , &number);
    
    if(number ==0)
    {
        count = 1;
    }
    else
    {
        if(number < 0)
		{
           number = -number;
        }
       while(number !=0)
	    {
	       number /=15;
	       count++;
	    }
    }
    printf("number of digits: %d\n" , count);
}
