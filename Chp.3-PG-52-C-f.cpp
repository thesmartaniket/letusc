#include <stdio.h>
int main()
{
	int r,s,a;
	
	printf("Enter the age of Ram:");
	scanf("%d",&r);
	printf("Enter the age of Shyam:");
	scanf("%d",&s);
	printf("Enter the age of Ajay:");
	scanf("%d",&a);
	
	if(r>s && s>a)
	printf("Ajay is the youngest one.");
	else if(r>a && a>s)
	printf("Shyam is the youngest one.");
	else if(s>r && r>a)
	printf("Ajay is the youngest one.");
	else if(s>a && a>r)
	printf("Ram is the youngest one.");
	else if(a>s && s>r)
	printf("Ram is the youngest one.");
	else if(a>r && r>s)
	printf("Shyam is the youngest one.");
	else printf("Error!");
	
	return 0;	
}
