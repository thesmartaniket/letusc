#include <stdio.h>
int main()
{
    int i,j,num,p=0,n=0,z=0;

    printf("How many number you want to want?:");
    scanf("%d",&i);

    for(j=1;j<=i;j++)
    {
        printf("Enter the number:");
        scanf("%d",&num);

        if(num==0)
        {
            z++;
        }
        else if(num<0)
        {
            n++;
        }
        else if(num>0)
        {
            p++;
        }
    }

    printf("The numbers you input contains %d zeros, %d positive numbers, %d negative numbers.\n",z,p,n);
    
    return 0;
}