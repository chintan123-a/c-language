#include<stdio.h>

int main()
{ 
  int c=10,n;
  printf("enter any number:");
  scanf("%d" ,&n);
  
  while(c<=n)
  {
     printf("%d",c);
     c++;
  }
}