#include <stdio.h>
int main() {
   int rows=4, i, j, number = 1;
 
   for(i = 1; i <= rows; i++) 
   {
      for (j = 1; j <= i; ++j)
      {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}