#include <stdio.h>
int main()
{
	float km,m,f,i,cm;
	
	printf("Enter the distance in KM:");
	scanf("%f",&km);
	
	m=km*1000;
	f=km*3280.84;
	i=km*39370.1;
	cm=km*100000;
	
	printf("The conversions from %f K.M. are :--\n1.Meters-%f\n2.Feets-%f\n3.Inches-%f\n4.Centimeters-%f\n",km,m,f,i,cm);
	
	return 0;
	
}
