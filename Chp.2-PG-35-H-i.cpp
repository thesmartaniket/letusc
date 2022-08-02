#include <stdio.h>
int main() 
{
 
     
    int  a[6]={100,50,10,5,2,1},m,temp,i; 
 
    printf("Enter the amount:");
 	scanf("%d",&m);
    temp=m;
    
     for(i=0;i<6;i++)
    {
     printf("\n%d notes is:%d",a[i],temp/a[i]);
     temp=temp%a[i];
    	 
    }
    
    
   
 
}
