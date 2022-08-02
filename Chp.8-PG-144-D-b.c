//Write a function power(a,b), to calculate the value of a raised to b.
#include <stdio.h>

int power(int , int );
int main()
{
    int a,b,c;

    printf("Enter the base number:");
    scanf("%d",&a);

    printf("Enter the power:");
    scanf("%d",&b);
    
    c=power(a,b);

    printf("The result is %d", c);

    return 0;
}

int power(int a, int b)
{
    long double c = 1.0;

    while (b != 0) 
    {
    c *= a;
    --b;
    }

    return(c);
}