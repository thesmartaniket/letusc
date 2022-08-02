#include<stdio.h>  
#include<stdlib.h>  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive or negative number:");  
    scanf("%d", &num);  
  
    printf("Absolute Value of |%d| is %d", num, abs(num));  
  
    return 0;  
}  
