//Given three variables x, y, z write a function to circularly shift their values to the right. In other words if x=5, y=8, z=10,
//after circular shift y=5, z=8, x=10. Call the function with variables a,b,c to circularly shift values.

#include <stdio.h>
int shift(int ,int ,int );
int main()
{
    int x=5,y=8,z=10;

    shift(x,y,z);

}

int shift( int a, int b, int c)
{
    int i,j,k,n;


    printf("Original values\nx=%d, y=%d, z=%d\n---------------\n",a,b,c);

    for(n=1;n<=3;n++)
    {

        i=a;
        a=b;
        b=c;
        c=i;

        printf("Shift %d\nx=%d, y=%d, z=%d\n",n,a,b,c);

        
    }

    return 0;
}
