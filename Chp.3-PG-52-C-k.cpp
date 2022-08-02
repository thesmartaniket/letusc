#include <stdio.h>
#include <math.h>
int main()
{
	int x1,x2,y1,y2,r;
	float i;
	
	printf("Enter the center co-ordinate of the circle--\n1.X-");
	scanf("%d",&x1);
	printf("2.Y-");
	scanf("%d",&y1);
	
	printf("Enter the radius of the circle:");
	scanf("%d",&r);
	
	printf("Enter the co-ordinate you want to check if it lies inside the circle--\n1.X-");
	scanf("%d",&x2);
	printf("2.Y-");
	scanf("%d",&y2);
	
	i=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	if(i>r)
	printf("The entered co-ordinates lies outside of the circle.");
	else if(i<r)
	printf("The entered co-ordinates lies inside of the circle.");
	else if(i==r)
	printf("The entered co-ordinates lies on the boundary of the circle.");
	else printf("Retry!");
	
	return 0;
}
