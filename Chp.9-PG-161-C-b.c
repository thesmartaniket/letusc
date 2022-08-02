//Write a function that recieves marks obtained by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main() and print the results in main().

#include <stdio.h>
int peravg();
int main()
{
    float a;
    a=peravg();

    printf("Percentage-%f\nAverage-%f",a,a);
    
    return 0;
}

int peravg()
{
    int p,c,m;
    float per;

    printf("Enter the number you got in---\nPhysics-");
    scanf("%d",&p);
    printf("Chemistry-");
    scanf("%d",&c);
    printf("Maths-");
    scanf("%d",&m);

    per=(p+c+m)/3;

    return(per);
}
