#include <stdio.h>
int main()
{
	int y;
	
	printf("Enter the year to check if it is leap year or not:");
	scanf("%d",&y);
	
	if(y%4==0)
	printf("It is a leap year");
	else printf("It is not a leap year");
	
	return 0;
}
