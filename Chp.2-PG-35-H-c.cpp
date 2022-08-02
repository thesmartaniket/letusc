#include <stdio.h>
#include <math.h>
int main()
{
	int f,s,t;
	float i,a;
	
	printf("Enter the sides of the triangle:-\n1.First Side-");
	scanf("%d",&f);
	printf("2.Second Side-");
	scanf("%d",&s);
	printf("3.Third Side-");
	scanf("%d",&t);
	
	i=(f+s+t)/2;
	
	a=sqrt(i*(i-f)*(i-s)*(i-t));
	
	printf("The area of the Triangle is %f",a);
	
	return 0;
}
