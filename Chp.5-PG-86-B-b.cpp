#include <stdio.h>
int main()
{
	int i,j=1,k=1;
	
	printf("Enter the number to find factorial value of:");
	scanf("%d",&i);
	
	while(j<=i)
	{
		k=k*j;
		j++;
	}
	
	printf("The factorial value of %d is %d",i,k);
	
	return 0;
}
