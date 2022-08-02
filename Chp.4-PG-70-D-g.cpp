#include <stdio.h>
#include <math.h>
int main()
{
	float w,h,i;
	printf("Enter the weight of the human in KG:");
	scanf("%d",&w);
	printf("Enter the height of the human in M:");
	scanf("%d",&h);
	
	i=w/pow(h,2);
	
	if(i<15)
	printf("Starvation.");
	else if(i>=15.1 && i<=17.5)
	printf("Anorexic.");
	else if(i>=17.6 && i<=18.5)
	printf("Underweight.");
	else if(i>=18.6 && i<=24.9)
	printf("Ideal");
	else if(i>=25 && i<=25.9)
	printf("Overweight.");
	else if(i>=30 && i<=30.9)
	printf("Obese.");
	else if(i>=40)
	printf("Morbidly Obese.");
	else printf("Retry");
	
	return 0;
}
