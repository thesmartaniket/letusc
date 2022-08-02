#include <stdio.h>
int main()
{
	char i;
	
	printf("Enter:");
	scanf("%c",&i);
	
	if(i>='0' && i<='9')
	printf("Entered character is a digit.");
	else if(i>='a' && i<='z')
	printf("Entered character is a small letter alphabet.");
	else if(i>='A' && i<='Z')
	printf("Entered character is a capital letter alphabet.");
	else printf("Entered character is a special character.");
	
	return 0;
}
