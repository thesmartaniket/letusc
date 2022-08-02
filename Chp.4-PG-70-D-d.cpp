#include <stdio.h> 
#include <math.h>
int main()
{

	int i,j,k;
	
	printf("Enter the lengths of the sides of the triangle:--\n1.First Side-");
	scanf("%d",&i);
	printf("2.Second Side-");
	scanf("%d",&j);
	printf("3.Third Side-");
	scanf("%d",&k);
	
	if(i==j && j!=k || j==k && k!=i || k==i && i!=j)
	printf("This is a isosceles triangle.");
	else if(i==j && j==k) printf("This is a equilateral triangle.");
	else if(i!=j && j!=k)
	{
		if(i==sqrt(j*j+k*k) || j==sqrt(i*i+k*k) || k==sqrt(j*j+i*i))
		printf("This is a right angled triangle.");
		else printf("This is a scalene triangle.");
	}
	else printf("Error!");
	
	return 0;
}
