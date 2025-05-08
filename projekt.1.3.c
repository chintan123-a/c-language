#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("Enter A:");
	scanf("%d" ,&a);
	
	printf("Enter B:");
	scanf("%d" ,&b);
	
	printf("Enter C:");
	scanf("%d" ,&c);
	
    printf("Enter D:");
	scanf("%d" ,&d);
	
	printf("Enter E:");
	scanf("%d" ,&e);
	
	if(a>b)
	  { 
	    if(a>c)
		    {
		   	printf("%d is minimum number" ,a);
		    }
		else
		    {
		    printf("%d is minimum number" ,b);
		    }
		if(a>d)
		    {
		    printf("%d is minimum number" ,a);
		    }
		else
		    {
		    printf("%d is minimum number" ,d);
		    }
	    if(a>e)
	        {
	        printf("%d is minimum number" ,a);
		    }
		else
		    {
		    printf("%d is minimum number" ,e);
	    	}
	    if(d>e)
			{
			printf("%d is minimum number" ,d);
			}
		else
		    {
		    printf("%d is minimum number" ,e);
	    	}
	    if(c>d)
		    {
		    printf("%d is minimum number" ,c);
		    }
		else
		    {
		    printf("%d is minimum number" ,d);
		    }
		if(c>e)
		    {
		    printf("%d is minimum number" ,c);
		    }
		else
		    {
		    printf("%d is minimum number" ,e);	
		    }
		if(d>e)
		    {
		    printf("%d is minimum number" ,d);
		    }
		else 
		    {
		    printf("%d is minimum number" ,e);	
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
		if(b>d)
		    {
		    printf("%d is minimum number" ,b);	
		    }
		else
		    {
		    printf("%d is minimum number" ,d);	
	     	}
	    if(b>e)
	        {
		    printf("%d is minimum number" ,b);	
		    }
		else
		    {
		    printf("%d is minimum number" ,e);	
	        }
	    if(d>e)
		    {
		    printf("%d is minimum number" ,d);
	     	}
	    else
		    {
		    printf("%d is minimum number" ,e);	
		    }
		if(c>d)
		    {
		    printf("%d is minimum number" ,c);	
	    	}
	    else
		    {
		    printf("%d is minimum number" ,d);	
		    }
		if(c>e)
		    {
		    printf("%d is minimum number" ,c);	
		    }
		else
		    {
		    printf("%d is minimum number" ,e);	
		    }
		if(d>e)
		    {
		     printf("%d is minimum number" ,d);	
		    }
		else
		    {
		     printf("%d is minimum number" ,e);	
		    }
	}
}