#include <stdio.h>
int main()
{
	int i,j;
	
	printf("Enter Ramesh salary:");
	scanf("%d",&i);
	
	j=(i*40)/100;
	
	i=i-j;
	
	j=(i*20)/100;
	
	i=i-j;
	
	printf("%d",i);
	
	return 0;
}
