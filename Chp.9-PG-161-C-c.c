//Write a C function to evaluate the series  sin(x)=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+... up yo 10 terms.

#include <stdio.h>
#include <math.h>

int fact(int );
float calc(int );
int main()
{
    int x;
    float a;

    printf("Enter the degree to calculate-");
    scanf("%d",&x);

    a=calc(x);

    printf("Sin(%d)=%f",x,a);

    return 0;
}

float calc(int x)
{
    float c,sum,i=-1,j;

    for(c=1;c<=19;c=c+2)
    {
        i=-1*i;
        j=fact(c);
        sum=sum+i*(pow(x,c)/j);
    }

    return(sum);
}

int fact(int c)
{
    for(int i=1;i<=(c-1);i++)
    {
        c=c*i;
    }

    return(c);
}