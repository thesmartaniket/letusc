#include <stdio.h>
int main()
{
	int i,j=1,k=0;
	
	printf("Enter the number of hours you worked:");
	scanf("%d",&i);
	
	if(i>40)
	{
		i=i-40;
		while(j<=i)
		{
			k=k+12;
			j++;
		}
	}
	
	printf("You will get Rs.%d extra for working extra %d hours.",k,i);
	
	return 0;
}
