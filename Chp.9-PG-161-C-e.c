//If the lengths of the sides of a triangle are denoted by a,b,c then wite a function to calculate the arra of the triangle.
#include <stdio.h>
#include <math.h>
int tarea(int ,int ,int );
int main()
{
    int x,y,z,n;

    printf("Enter the length of three sides of the triangle:-\nSide A:");
    scanf("%d",&x);
    printf("Side B:");
    scanf("%d",&y);
    printf("Side C:");
    scanf("%d",&z);

    n=tarea(x,y,z);

    printf("The area of the TRAINGLE is %d", n);

    return 0;
}

int tarea(int x,int y,int z)
{
    int a,s;

    s=(x+y+z)/2;

    a=sqrt(s*(s-x)*(s-y)*(s-z));

    return a;
}