#include <stdio.h>
int main()
{
	int h,t;
	float c;
	
	printf("Enter the following factors of the steel:--\n1.Hardness-");
	scanf("%d",&h);
	printf("2.Carbon content-");
	scanf("%f",&c);
	printf("3.Tensile strength-");
	scanf("%d",&t);
	
	if(h>50 && c<0.7 && t>5600)
	printf("Steel is Grade 10.");
	else if(h>50 && c<0.7)
	printf("Steel is Grade 9");
	else if(c<0.7 && t>5600)
	printf("Stell is Grade 8");
	else if(h>50 && t>5600)
	printf("Steel is Grade 7");
	else if(h>50 || c<0.7 || t>5600)
	printf("Steel is Grade 6");
	else printf("Steel is grade 5");
	
	return 0; 
}
