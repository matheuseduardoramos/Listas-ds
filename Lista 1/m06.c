#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[4][4],matriz2[4][4],matriz3[4][4], i, j, maxi, maxj, maxv = 0;
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         scanf("%d", &matriz[i][j]);
      }
   }
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         scanf("%d", &matriz2[i][j]);
      }
   }
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         if (matriz[i][j] > matriz2[i][j])
         {
           matriz3[i][j] = matriz[i][j];
         }
         else
         {
            matriz3[i][j] = matriz2[i][j];
         }
         
         
      }
   }
   for (i = 0; i < 4; i++)
   {
      printf("\n");
      for (j = 0; j < 4; j++)
      {
         printf(" %d ",matriz3[i][j]);
      }
   }
   return 0;
}
