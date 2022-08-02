#include <stdio.h>
int main()
{
    int p,c,m=21;

    while(1)
    {
        printf("No. of matchsticks left %d\n",m);
        printf("Pick up matchstick between 1 to 4:");
        scanf("%d",&p);

        if(p>4 || p<1) 
        continue;

        m=m-p;
        printf("\nMatchsticks left = %d\n",m);

        c=5-p;

        printf("Computer picked %d number of matchstikcs.\n",c);
        
        m=m-c;

        if(m==1)
        {
         printf("Matchsticks left %d\n",m);
         printf("You lost!\n");
         break;   
        }
    }

    return 0;
}