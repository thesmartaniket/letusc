#include <stdio.h>
int main()
{
    int n,f=1;
    float i,t=0;

    for(n=1;n<=7;n++)
    {
        f=f*n;
        i=n/f;
        t=t+i;
    }

    printf("The sum of the frst seven series is %f",t);
    return 0;
}