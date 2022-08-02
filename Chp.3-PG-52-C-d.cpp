#include <stdio.h>
int main()
{
	int y,i,j,k=0,l;
	
	printf("Enter the year:");
	scanf("%d",&y);
	
	
	for(j=l=2001;j<=y;j++)
	{
		if((l-1)%4==0)
			{
				if(k>7)
				{
					k=0;
					k=k+2;
				}
				else
				{
					k=k+2;
				}
			}
		else
			{
				if(k>7)
				{
					k=0;
					k=k++;	
				}
				else
				{
					k++;
				}
		
			}
		
		printf("%d %d\n",j,k);
		
	}
	
	switch(k)
	{
		case 1:
			printf("Monday");
		    break;
		    
		case 2:
			printf("Tuesday");
		    break;
			
		case 3:
			printf("Wednesday");
		    break;	
			
		case 4:
			printf("Thursday");
		    break;	    
			
		case 5:
			printf("Friday");
		    break;	
		    
		case 6:
			printf("Saturday");
		    break;   
			
		case 7:
			printf("Sunday");
		    break;
			
		default:
			printf("Error");
			break;		 
	}
	
	return 0;
	
}
