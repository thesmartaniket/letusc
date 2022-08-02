#include <stdio.h>
int main()
{
    int n,i,j;

    for(n=1;n<=100;n++)
    {
        i=0;

        for(j=2;j<=n/2;j++)
        {
            if(n%j==0)
            i++;
            break;
        }

        if(i==0 && n!=1)
        printf("%d  ",n);
    }

    return 0;
}