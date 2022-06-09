#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[4][4], i, j, m10 = 0;
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
         if (matriz[i][j] > 10)
           
         {
            printf("\n%d\n", matriz[i][j]);
            m10++;
         }
      }
   }
   printf("possui %d numeros maiores que 10", m10);
   return 0;
}
