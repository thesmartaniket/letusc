#include <stdio.h>
int main()
{
	float t,pr,m,p,c,cs;
	
	printf("Enter the number you got in:--\n1.Maths-");
	scanf("%f",&m);
	printf("2.Physics-");
	scanf("%f",&p);
	printf("3.Chemistry-");
	scanf("%f",&c);
	printf("4.Computer science-");
	scanf("%f",&cs);	
	
	t=m+p+c+cs;
	pr=(m+p+c+cs)/4;
	
	printf("The total no. you scored is %f & Percentage is %f",t,pr);
	
	return 0;
}
