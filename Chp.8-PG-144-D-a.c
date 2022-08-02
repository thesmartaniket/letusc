//Write a function to calculate the factorial value of any integer entered through the keyboard.
#include <stdio.h>

int fac(int n);
int main()
{
    int n, m;

    printf("Enter a number to calculate its factorial:");
    scanf("%d",&n);

    m=fac(n);

    printf("The factorial value is %d", m);

    return 0;
}

int fac(int n)
{
    int i,k;

    k=n;

    for(i=1;i<n;i++)
    {
       k=k*i;
    }

    return(k);
}
