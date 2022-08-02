#include <stdio.h>
int main()
{
	float s,c,i,p;
	
	printf("Enter the cost price of the product:");
	scanf("%f",&c);
	printf("Enter the selling price of the product:");
	scanf("%f",&s);
	
	if(s==c)
	{
		printf("You neighter make any profit nor loss.");
	}
	else if(s>c)
	{
		i=s-c;
		p=(i*100)/c;
		printf("You made a profit. Your profit in percentage is %f",p);
	}
	else if(c>s)
	{
		i=c-s;
		p=(i*100)/c;
		printf("You made a loss. Your loss in percentage is %f",p);
	}
	else printf("Error! Retry!");
	
	return 0;
}
