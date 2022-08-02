#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	float f;
	
	printf("Enter the angle:");
	scanf("%d",&a);
	
	f=pow(sinf(a),2)+pow(cosf(a),2);
	if(f==1)
	printf("The sin(%d)^2 + cos(%d)^2 = 1",a,a);
	else printf("The sin(%d)^2 + cos(%d)^2 = %f",a,a,f);
	
	return 0;
}
