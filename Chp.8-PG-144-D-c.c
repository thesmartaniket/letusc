//Write a general-purpose function to convert any given year into its Roman equivalent.
#include <stdio.h>

int roman(int );
int main()
{
    int n;

    printf("Enter a year to convert it into its roman equivalent:");
    scanf("%d",&n);

    roman(n);
}

int roman(int n)
{
    int i,j=10000,k=0,m,l,o,p;
   
    m=n;

    for(i=4;i>=1;i--)
    {
        j=j/10;
        k=n%j;     
        m=(m-k)/j;


            switch(i)
            {
                case 4:
                    if(m==1)
                    {
                        printf("m");        
                    }
                    else
                    {
                        for(o=1;o<=m;o++)
                        {
                            printf("m");
                        }
                    }
                    break;

                case 3:
                        if(m>5)
                        {
                            l=m-5;
                            printf("d");

                            for(p=1;p<=l;p++)
                            {
                                printf("c");
                            }
                        }
                        else if(m==5)
                        {
                            printf("d");
                        }
                        else if(m<5)
                        {
                            for(p=1;p<=m;p++)
                            {
                                printf("c");
                            }
                        }   
                    break;

                case 2:
                      if(m>5)
                        {
                            l=m-5;
                            printf("l");

                            for(p=1;p<=l;p++)
                            {
                                printf("x");
                            }
                        }
                        else if(m==5)
                        {
                            printf("l");
                        }
                        else if(m<5)
                        {
                            for(p=1;p<=m;p++)
                            {
                                printf("x");
                            }
                        }        
                    break;

                case 1:
                        if(m>5)
                        {
                            l=m-5;
                            printf("v");

                            for(p=1;p<=l;p++)
                            {
                                printf("i");
                            }
                        }
                        else if(m==5)
                        {
                            printf("v");
                        }
                        else if(m<5)
                        {
                            for(p=1;p<=m;p++)
                            {
                                printf("i");
                            }
                        }   
                    break;          
                    
            }
        m=k;
    }
    return 0;
}
