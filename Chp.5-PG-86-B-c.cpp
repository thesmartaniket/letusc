#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k;
	
	printf("Enter the number:--\nA:");
	scanf("%d",&i);
	printf("B:");
	scanf("%d",&j);
	
	k=pow(i,j);
	
	printf("The value is %d\n",k);
	
	return 0;
}
