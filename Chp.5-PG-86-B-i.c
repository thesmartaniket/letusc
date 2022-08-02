#include <stdio.h>
int main()
{
    int j,k,l,n;

    while(1)
    {
        printf("Enter number to find the range or enter 0 to stop:");
        scanf("%d",&n);

        if(n==0)
        break;

        if(n>j)
        {
            j=n;
        }
        else if(j>n)
        {
            k=n;
        }
    }

    l=j-k;
    printf("The range is %d",l);

    return 0;

}