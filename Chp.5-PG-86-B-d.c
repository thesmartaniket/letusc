#include <stdio.h>
int main()
{
    int i;
    while(i<=255)
    {
        printf("The ASCII value of %d is %c\n",i,i);
        i++;
    }
    return 0;
}