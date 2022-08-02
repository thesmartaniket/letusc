#include <stdio.h>
int main()
{
	int r,g,b;
	float w,c,m,y,a,i,j,k,max;
	
	printf("Enter the values of colours:--\n1.R-");
	scanf("%d",&r);
	printf("2.G-");
	scanf("%d",&g);
	printf("3.B-");
	scanf("%d",&b);
	
	i=r/255;
	j=g/255;
	k=b/255;
	
	if(r>g && g>b || r>b && b>g)
	{
		max=r;
	}
	else if(g>r && r>b || g>b && b>r)
	{
		max=g;
	}
	else if(b>r && r>g || b>g && g>r)
	{
		max=b;
	}
	
	w=max;
	
	c=(w-i)/w;
	m=(w-j)/w;
	y=(w-k)/w;
	a=1-w;
	
	printf("The values are C-%f | M-%f | Y-%f | K-%f",c,m,y,a);
	
	return 0;
}
