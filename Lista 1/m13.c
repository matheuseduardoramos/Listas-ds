#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[4][4], matriz2[4][4], i, j;
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         do
         {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 20 || matriz[i][j] < 1)
            {
               printf("numero invalido: ");
            }
           
         } while (matriz[i][j] > 20 || matriz[i][j] < 1);
      }
   }
 
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         if (i >= j)
         {
            matriz2[i][j] = matriz[i][j];
         }
         else
         {
            matriz2[i][j] = 0;
         }
      }
   }
   printf("\nmatriz normal\n");
   for (i = 0; i < 4; i++)
   {
      printf("\n");
      for (j = 0; j < 4; j++)
      {
         printf(" %d ", matriz[i][j]);
      }
   }
 
   printf("\nmatriz triangular inferior\n");
   for (i = 0; i < 4; i++)
   {
      printf("\n");
      for (j = 0; j < 4; j++)
      {
         printf(" %d ", matriz2[i][j]);
      }
   }
   return 0;
}
