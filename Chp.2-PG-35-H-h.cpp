#include <stdio.h>
int main()
{
	int c,d,i,j;
	
	printf("Enter C:");
	scanf("%d",&c);
	printf("Enter D:");
	scanf("%d",&d);
	
	i=c;
	j=d;
	c=j;
	d=i;
	
	printf("The value of C is %d & D is %d",c,d);
	
	return 0;
	
}
