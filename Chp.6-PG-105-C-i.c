#include <stdio.h>
int main()
{
    int p=100000,ip,t;

    for(t=1;t<=10;t++)
    {
        ip=p*10/100;
        p=p+ip;

        printf("The population after %d year is %d\n",t,p);
    }

    return 0;
}
