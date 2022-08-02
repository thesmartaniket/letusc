//Write a dunction to compute the greatest common divisor given by Euclid's algorithm.
#include <stdio.h>
int gcd(int ,int );
int main()
{
    int dn,ds,r;

    printf("\n---GREATEST COMMON DIVISOR CALCULATOR---\n\nEnter digits-\nA:");
    scanf("%d",&dn);
    printf("B:");
    scanf("%d",&ds);

    r=gcd(dn,ds);

    printf("The GREATEST COMMON DIVISOR is %d\n\n",r);

    return 0;
}

int gcd(int dn, int ds)
{

  int q,i;
    while(1)
    {
        q=dn/ds;
        i=dn-q*(ds); 

        if(i==0)
          {
            return ds;
          }
        
        dn=ds;
        ds=i;
    }
}

