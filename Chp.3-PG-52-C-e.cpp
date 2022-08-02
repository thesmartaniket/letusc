#include <stdio.h>
int main()
{
	int num,n,i,r,t=0,j=100000;
	
	printf("Enter 5 digit positive number:");
	scanf("%d",&num);
	
	n=num;
	
	for(i=1;i<=5;i++)
	{
		r=n%10;
		n=n-r;
		n=n/10;
		j=j/10;
		r=r*j;
		t=t+r;	
	}
	
	if(num==t)
	printf("The number %d is same with the reverse %d",num,t);
	else printf("The number %d is not same with the reverse %d",num,t);
	
	return 0;
}
