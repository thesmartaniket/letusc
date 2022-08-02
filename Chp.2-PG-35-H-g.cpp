#include <stdio.h>
#include <math.h>
int main()
{
	float a,i,j,k;
	
	printf("Enter the angle:");
	scanf("%f",&a);
	
	i=sinf(a);
	j=cosf(a);
	k=tanf(a);
	
	printf("The results are:-\n1.Sin- %f\n2.Cos- %f\n3.Tan- %f",i,j,k);
	
	return 0;	
}
