#include <stdio.h>
int main()
{
	int f, s, t, a;
	
	printf("Enter the angles of the triangle:-\n1.First Angle-");
	scanf("%d",&f);
	printf("2.Second Angle-");
	scanf("%d",&s);
	printf("3.Third Angle-");
	scanf("%d",&t);
	
	a=f+s+t;
	
	if(a==180)
	printf("This can be triangle.");
	else printf("this can't be triangle.");
	
	return 0;
}
