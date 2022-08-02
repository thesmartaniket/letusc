#include <stdio.h>
int main()
{
	float l,b,r,ar,ac,p,c;
	
	printf("Enter the measurments of rectangle:-\n1.Length-");
	scanf("%f",&l);
	printf("2.Breadth-");
	scanf("%f",&b);
	printf("Enter the radius of the circle-");
	scanf("%f",&r);
	
	p=2*(l+b);
	c=(2*22*r)/7;
	ar=l*b;
	ac=(22*r*r)/7;
	
	printf("Rectangle:-\n1.Area-%f\n2.Perimeter-%f\nCircle:-\n1.Area-%f\n2.Circumference-%f",ar,p,ac,c);
	
	return 0;	
}
