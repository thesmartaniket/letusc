//A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
#include <stdio.h>
int prime();
int main()
{
    int n;

    printf("Enter a number to get its prime factors:");
    scanf("%d", &n);

    prime(n);

    return 0;
}

int prime(int n)
{
    int i,j=2,k,l;

    for(i=2;i<=j;i++)
    {
top: 
        k=n%i;
        if(k==0)
        {
            printf("%d\n",i);
            n=n/i;

            if(n==1)
            {
                break;
            }
            else
            {
               goto top;     
            }
        }
        else if(k>=1)
        {
            j++;
        }
    }

    return 0;
}