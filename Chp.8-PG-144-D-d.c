//Any year is entered thhrough the keyboard. Write a function to detemine wheter the year is a leap year or not.

#include <stdio.h>
int leapyear(int );
int main()
{
    int y, i;

    printf("Enter the year:");
    scanf("%d", &y);

    i=leapyear(y);

    if(i==0)
    {
        printf("Entered year is a leap year.");
    }
    else if(i==1)
    {
        printf("Entered year is not a leap year.");
    }

    return 0;
}

int leapyear(int i)
{
    int flag;

    if(i%4==0)
    {
       flag=0;
    }
    else if(i/4!=0)
    {
       flag=1;     
    }

    return(flag);
}