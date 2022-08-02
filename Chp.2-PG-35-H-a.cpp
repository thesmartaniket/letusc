#include <stdio.h>
int main()
{
	int n,i,r,t=0;
	
	printf("Enter 5 digit positive number:");
	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		r=n%10;
		n=n-r;
		n=n/10;
		t=t+r;
	}
	
	printf("The sum of the number is %d",t);
	
	return 0;
}
