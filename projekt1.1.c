#include<stdio.h>

int main()
{
     int a,b,c,d;
	 
	 printf("Enter A:");
	 scanf("%d" ,&a);
	 
	 printf("Enter B:");
	 scanf("%d" ,&b);
	 
	 printf("Enter C:");
	 scanf("%d" ,&c);
	 
	 printf("Enter D:");
	 scanf("%d" ,&d);

	 if(a>b)
	 {
	    if(a>c)
		    {
	 		printf("%d is maximum number" ,a);
		    } 
		else
		    {
		 	printf("%d is maximum number" ,c);
	        }  
		if(a>d)
			{
		    	printf("%d is maximum number" ,a);
			}
		else
			{
				printf("%d is maximum number" ,d);
			}
		if(c>d)
			{
				printf("%d is maximum number" ,c);
			}
		else
			{
				printf("%d is maximum number" ,d);
            }
     }
	 else
	 {
	    if(b>c)
		    {
	    	    printf("%d is maximum number" ,b);
		    }
		else
		    {  
		        printf("%d is maximum number" ,c);
		    }
		if(b>d) 
		    {
		    	printf("%d is maximum number" ,b);
		    } 
		else 
		    {
		    	printf("%d is maximum number" ,d);
		    } 
		if(c>d)
		    {
			    printf("%d is maximum number" ,c);
			}
		else 
		    {
		    	printf("%d is maximum number" ,d);
		    }
	 }
}