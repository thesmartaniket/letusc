#include <stdio.h>
int main()
{
	float a,i,l,b;
	
	printf("Enter the paper size you want to get measurment of:-\nA-");
	scanf("%f",&a);
	
	l=1189;
	b=841;
	
	for(i=1;i<=a;i++)
	{
		if(l>b)
		{
			l=l/2;
		}
		else
		{
			if(b>l)
			{
				b=b/2;
			}
			else printf("Error!");
		}
	}
	
	if(l>b)
	printf("The size of the A-%f paper is %f mm by %f mm.", a,l,b);
	else if(b>l)
	printf("The size of the A-%f paper is %f mm by %f mm.", a,b,l);
}
