//Write a function to compute the distance between two points and use it to develop another function that will compute the area of the traingle whose
//vertices are A(x1,y1),B(x2,y2),C(x3,y3). Use these functions to develop a function which returns a value 1 if the point(x,y) lines inside the
//triangle ABC, otherwise returns a value 0.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int tarea(int *,int *,int *);
int dist(int *,int *,int *,int *,int *,int *);
int locate(int ,int ,int ,int ,int ,int ,int );
int main()
{
    int x1, x2, x3, y1, y2, y3;

    printf("Enter the points(co-ordinates)-\nA(x1):");
    scanf("%d",&x1);
    printf("A(y1):");
    scanf("%d",&y1);
    printf("B(x2):");
    scanf("%d",&x2);
    printf("B(y2):");
    scanf("%d",&y2);
    printf("C(x3):");
    scanf("%d",&x3);
    printf("B(y3):");
    scanf("%d",&y3);

    dist(&x1,&x2,&x3,&y1,&y2,&y3);

    return 0;
}

int dist(int *x1,int *x2,int *x3,int *y1,int *y2,int *y3)
{
    int a,b,c,area,p;
    a=sqrt(pow((*x2-*x1),2)+pow((*y2-*y1),2));
    b=sqrt(pow((*x3-*x2),2)+pow((*y3-*y2),2));
    c=sqrt(pow((*x1-*x3),2)+pow((*y1-*y3),2));

    printf("Length of the sides-\nA-%d B-%d C-%d\n",a,b,c);

    area=tarea(&a,&b,&c);

    p=locate(*x1,*x2,*x3,*y1,*y2,*y3,area);

    if(p==1)
    printf("Point lies inside the triangle ABC.");
    else if(p==0)
    printf("Point doesn't lies inside the traingle ABC.");

    return 0;
}

int tarea(int *a,int *b,int *c)
{
    int i,s;

    s=(*a+*b+*c)/2;

    i=sqrt(s*(s-*a)*(s-*b)*(s-*c));

    printf("Area of the triangle-%d\n",i);

    return i;
}

int locate(int x1,int x2,int x3,int y1,int y2,int y3,int a)
{
    int x,y;
    float a1,a2,a3;

    printf("Enter the co-ordinate of the point to check if it lies inside the triangle ABC or not-\nP(x):");
    scanf("%d",&x);
    printf("P(y):");
    scanf("%d",&y);

    a1=fabs((x1*(y2-y)+x2*(y-y1)+x*(y1-y2))/2.0);
    a2=fabs((x*(y2-y3)+x2*(y3-y)+x3*(y-y2))/2.0);
    a3=fabs((x1*(y-y3)+x*(y3-y1)+x3*(y1-y))/2.0);

    if(a==(a1+a2+a3))
    {
        return 1;
    }
    else return 0;
}