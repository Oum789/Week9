#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
int main() 
{
    // define a square
   int n;
   scanf("%d",&n);
   // magic square exist only [1,infinity)-{2} 
    if((n<1)||(n==2))
    {
        printf("No");
        exit(0);
    }
   int square[n][n];
   int i, j = 0;
   int sum, sum1, sum2;
   int flag = 0;
 
   for (i=0;i<n;i++) 
   {
      for (j=0;j<n;j++)
         scanf("%d", &square[i][j]);
   }
 
   //Check oblique sum
   sum=0;
   for (i=0;i<n;i++) 
   {
      for (j=0;j<n;j++) 
      {
         if (i==j)
            sum = sum + square[i][j];
      }
   }
 
   //check horizontal sum
   for (i=0;i<n;i++) 
   {
      sum1 = 0;
      for (j=0;j<n;j++) 
      {
         sum1= sum1 + square[i][j];
      }
      if (sum==sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   //Check vertical sum
   for (i=0;i<n;i++) 
   {
      sum2 = 0;
      for (j=0;j<n;j++) 
      {
         sum2 = sum2 + square[j][i];
      }
      if (sum==sum2)
         flag = 1;
      else 
      {
         flag = 0;
         break;
      }
   }
   //Check if its pass all condition to be magic square
   if (flag==1)
      printf("Yes");
   else
      printf("No");
 
   return 0;
}
