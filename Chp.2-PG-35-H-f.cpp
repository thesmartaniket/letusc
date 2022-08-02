#include <stdio.h>
#include <math.h>
int main()
{
	float wcf,i,v,t;
	
	printf("Enter the temperature of the enviorment:");
	scanf("%f",&t);
	printf("Enter the velocity of the wind:");
	scanf("%f",&v);
	
	i=pow(v,0.16);
	
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*i;
	
	printf("The wind chill factor is %f",wcf);
	
	return 0;
}
