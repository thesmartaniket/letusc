#include <stdio.h>
int main()
{
    int i,j,k=1,l,c,t;

    printf("Enter an number to convert it from decimal to octal number system:");
    scanf("%d",&i);

    while(1)
    {
        if(i==0)
        break;

        j=i%8;
        i=i-j;
        i=i/8;
        
        k=k*10;
        l=k/10;

        t=t+(j*l);
        c++;
    }
    printf("%d\n",t);
    return 0;
}