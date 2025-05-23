#include<stdio.h>

int main()
{
	int c;
	
	printf("enter array c: ");
	scanf("%d" , &c);
	
	int a[c];
	
	printf("enter array elements:\n");
	for(int i = 0; i < c; i++)
	{
		printf("a[%d] = " , i);
		scanf("%d" , &a[i]);
	}
	
	printf("length of an array: %d\n" , c);
}