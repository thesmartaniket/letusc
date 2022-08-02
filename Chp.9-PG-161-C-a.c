//Write a function the receives 5 integers and returns the sum, average and standard deviation of the numbers. Call this function from main() and print the results in main().
#include <stdio.h>
#include <math.h>
float integers(float ,float ,float ,float, float, int);
int main()
{
    float n1,n2,n3,n4,n5;
    float a;
    int i;

    printf("Enter the 5 integers--\n");
    printf("Number 1:");
    scanf("%f",&n1);
    printf("Number 2:");
    scanf("%f",&n2);
    printf("Number 3:");
    scanf("%f",&n3);   
    printf("Number 4:");
    scanf("%f",&n4);
    printf("Number 5:");
    scanf("%f",&n5);

    for(i=1;i<=3;i++)
    {
      a=integers(n1,n2,n3,n4,n5,i);  

      switch(i)
      {
        case 1:
            printf("Sum=%f\n",a);
            break;

        case 2:
            printf("Average=%f\n",a);
            break;

        case 3:
            printf("Standard deviation=%f\n",a);
            break;        
      }
    }

    return 0;
}

float integers(float n1, float n2, float n3, float n4, float n5, int i)
{
    float sum,avg,sd;
    switch(i)
    {
        case 1:
            sum=n1+n2+n3+n4+n5;
            return(sum);

        case 2:
            avg=(n1+n2+n3+n4+n5)/5;
            return(avg);

        case 3:
            avg=(n1+n2+n3+n4+n5)/5;
            n1=n1-avg;
            n2=n2-avg;
            n3=n3-avg;
            n4=n4-avg;
            n5=n5-avg;
        
            n1=n1*n1;
            n2=n2*n2;
            n3=n3*n3;
            n4=n4*n4;
            n5=n5*n5;

            sum=n1+n2+n3+n4+n5;

            sd=sum/4;

            sd=sqrt(sd);
            
            return(sd);
    }

    return 0;
}