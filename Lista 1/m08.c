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
         if (j > i)
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
   printf("soma triangulo superior = %d", soma);
 
   return 0;
}
