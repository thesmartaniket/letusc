#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x,j,k,l;

    printf("Enter the x:");
    scanf("%f",&x);

    for(i=1;i<=7;i++)
    {
        j=(x-1)/x;

        if(i==1)
        {
            k=k+j;
        }
        else if(i>1)
        {
            l=pow(j/2,i);
            k=k+l;
        }
    }

    printf("The sum of the first seven terms is %f",k);

    return 0;
}