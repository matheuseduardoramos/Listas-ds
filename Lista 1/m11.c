#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[3][3], i, j, soma = 0;
 
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &matriz[i][j]);
         if ( i+1 + j+1 == 4)
         {
            soma += matriz[i][j];
         }
      }
   }
   for (i = 0; i < 3; i++)
   {
      printf("\n");
      for (j = 0; j < 3; j++)
      {
         printf(" %d  ",matriz[i][j]);
      }
   }
   printf("soma diagonal principal = %d", soma);
 
   return 0;
}
