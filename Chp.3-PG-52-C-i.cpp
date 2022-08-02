#include <stdio.h>
int main()
{
	int l,b,a,p;
	
	printf("Enter the length and breadth of the triangle-\n1.Length-");
	scanf("%d",&l);
	printf("2.Breadth-");
	scanf("%d",&b);
	
	a=l*b;
	
	p=2*(l+b);
	
	if(a>p)
	printf("Area of the rectangle is greater than Perimeter.");
	else printf("Perimeter of the rectangle is greater than Area.");
	
	return 0;
}
