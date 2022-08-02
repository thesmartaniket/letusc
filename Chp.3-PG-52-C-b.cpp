#include <stdio.h>
int main()
{
	int i;
	
	printf("Enter a integer to check if it is odd or even:");
	scanf("%d",&i);
	
	
	if(i%2==0)
	{
		printf("It is an even number!");
	}
	else
	{
		printf("It is a odd number!");
	}
	
	return 0;
	
}
