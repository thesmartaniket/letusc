#include <stdio.h>
int main()
{
	int i,j,k;
	
	printf("Enter the lengths of the sides of the triangle:--\n1.First Side-");
	scanf("%d",&i);
	printf("2.Second Side-");
	scanf("%d",&j);
	printf("3.Third Side-");
	scanf("%d",&k);
	
	if((i+j)>k || (j+k)>i || (k+i)>j)
	printf("The triangle is valid.");
	else printf("The triangle is not valid.");
	
	return 0;
}
