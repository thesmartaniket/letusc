#include <stdio.h>
#include <math.h>
int main()
{
	int l1,l2,g1,g2;
	float d;
	
	printf("Enter Lattitude co-ordinates:-\nL1-");
	scanf("%d",&l1);
	printf("L2-");
	scanf("%d",&l2);
	printf("Enter Longitude co-ordinates:-\nG1-");
	scanf("%d",&g1);
	printf("G2-");
	scanf("%d",&g2);
	
	d=3963/cosf(sinf(l1)*sinf(l2)+cosf(l1)*cosf(l2)*cosf(g2-g1));
	
	printf("The distance between the co-ordinates in nautical miles are %f",d);
	
	return 0;
}
