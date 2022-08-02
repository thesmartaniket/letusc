#include <stdio.h>
int main()
{
	int y,i,j;
	
	printf("Enter a year to check if it is a leap year or not:");
	scanf("%d",&y);
	
	if(y%4==0 && y!=0)
	printf("%d is a leap year.",y);
	else if(y%4!=0 || y!=0)
	printf("%d is not a leap year.",y);
	
	return 0;
}
