#include <stdio.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,i,j;
	
	printf("Enter the first co-ordinates--\n1.X-");
	scanf("%f",&x1);
	printf("2.Y-");
	scanf("%f",&y1);
		
	printf("Enter the second co-ordinates--\n1.X-");
	scanf("%f",&x2);
	printf("2.Y-");
	scanf("%f",&y2);
		
	printf("Enter the third co-ordinates--\n1.X-");
	scanf("%f",&x3);
	printf("2.Y-");
	scanf("%f",&y3);
	
	i=(y2-y1)/(x2-x1);
	j=(y3-y2)/(x3-x2);
	
	if(i==j)
	printf("All entered co-ordinates lie in a straight line.");
	else printf("All entered co-ordinates don't lie in a straight line");
	
	return 0;
}
