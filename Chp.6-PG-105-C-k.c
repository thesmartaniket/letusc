#include <stdio.h>
int main()
{
    int i,h,m;

    for(i=1;i<=2;i++)
    {
        for(h=1;h<=12;h++)
        {
            for(m=0;m<=59;m++)
            {
                if(i==1)
                {
                    printf("Time-%d:%d AM\n",h,m);
                }
                else if(i==2)
                {
                    printf("Time-%d:%d PM\n",h,m);
                }
            }
        }
    }

    return 0;
}