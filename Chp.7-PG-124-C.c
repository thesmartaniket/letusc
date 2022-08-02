#include <stdio.h>o

int factorial()
{
    int n,i,k;
    printf("---------------------------\n");
    printf("Factorial of a number:--\n");
    printf("Enter a number:");
    scanf("%d",&n);
    k=n-1;
    for(i=k;i>=1;i--)
    {
        n=n*i;
    }
    printf("Answer:%d\n",n);
    return 0;
}

int primen()
{
    int n,i,f=0,m;
    printf("---------------------------\n");
    printf("Prime or Not:--\n");
    printf("Enter a number:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
        printf("Number is not prime\n");
        f=1;
        break;
        }
    }

    if(f==0)
    printf("Number is prime\n");

    return 0;
 }

int oddeven()
 {
    int n;
    printf("---------------------------\n");
    printf("Odd or Even:--\n");
    printf("Enter a number:");
    scanf("%d",&n);

    if(n/2==0)
    {
       printf("Odd.\n");
    }
    else printf("Even.\n");

    return 0;
 }

int main()
{
    int m;

top:
    printf("---------------------------\n");
    printf("Enter the number of the task you want to perform from below list:-\n1.Factorial of a number\n2.Prime or Not\n3.Odd or Even\n4.Exit\n:-");
    scanf("%d", &m);
    printf("---------------------------\n");

    switch(m)
    {
        case 1:
            factorial();
            goto top;

        case 2:
            primen();
            goto top;

        case 3:
            oddeven();
            goto top;

        case 4:
            return 0;

        default:
            printf("Retry!\n");
            goto top;

    }
}
