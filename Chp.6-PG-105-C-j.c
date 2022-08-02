#include <stdio.h>
int main()
{
    int a,b,c,d,i,j;

    printf("enter the limit count to Ramanujan Number:");
    scanf("%d",&i);

    for(a=1;a<=i;a++)
    {
        for(b=1;b<=i;b++)
        {
            for(c=1;c<=i;c++)
            {
                for(d=1;d<=i;d++)
                {
                    if(a*a*a+b*b*b==c*c*c+d*d*d)
                    {
                        j=a*a*a+b*b*b;
                        printf("%d\n",j);
                    }
                    
                }
            }
        }
    }

    return 0;
}