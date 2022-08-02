#include <stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the co-ordinates-\n1.X-");
	scanf("%d",&x);
	printf("2.Y-");
	scanf("%d",&y);
	
	if(x==0 && y==0)
	printf("The co-ordinates lies on the origin.");
	else if(x==0) printf("The co-ordinates lies on the Y-axis.");
	else if(y==0) printf("The co-ordinates lies on the X-axis.");
	else printf("The co=ordinates nither lies on the X-axis nor Y-axis.");
	
	return 0;
}
