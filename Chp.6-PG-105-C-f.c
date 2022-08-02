#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,q,r,n,p,a[i];

    for (i = 1; i<=10; i++)
    {
        printf("%d.Enter the following things mentioned below:-\n1.Compound Interest-",i);
        scanf("%d",&q);
        printf("2.Rate of Interest-");
        scanf("%d",&r);
        printf("3.Number of Years-");
        scanf("%d",&n);
        printf("4.Principal-");
        scanf("%d",&p);
        
        j=p*(1+r/q);

        k=n*q;

        a[i]=pow(j,k);
    }

    for (i = 1; i<=10; i++)
    {
        printf("%d.The Compound Interests is %d",i,a[i]);
    }
    
    return 0;
}