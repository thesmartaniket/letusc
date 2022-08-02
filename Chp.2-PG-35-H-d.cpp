#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	float r,i;
	
	printf("Enter the cordinates:-\nX-");
	scanf("%d",&x);
	printf("Y-");
	scanf("%d",&y);
	
	r=sqrt(x*x+y*y);
	i=1/tanf(y/x);
	
	printf("The polar co-ordinates are (%f,%f)",r,i);
	
	return 0;
}
