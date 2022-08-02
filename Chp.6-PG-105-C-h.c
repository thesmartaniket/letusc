#include <stdio.h>
int main()
{
    int b,p,h;

    for(b=1;b<=30;b++)
    {
        for(p=1;p<=30;p++)
        {
            for(h=1;h<=30;h++)
            {
                if(b*b+p*p==h*h)
                {
                    printf("%d,%d,%d\n",b,p,h);
                }
            }
        }
    }

    return 0;
}