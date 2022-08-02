#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the numbers:--\n1.First-");
	scanf("%d",&a);
	printf("2.Second-");
	scanf("%d",&b);
	printf("3.Third-");
	scanf("%d",&c);
	
	if(a>b && b>c || a>c && c>b)
	printf("%d is the greatest number.",a);
	else if(b>c && c>a || b>a && a>c)
	printf("%d is the greatest number.",b);
	else if(c>b && b>a || c>a && a>b)
	printf("%d is the greatest number.",c);
	
	return 0;
}
