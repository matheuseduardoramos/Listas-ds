#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[4][4], i, j, maxi, maxj, maxv = 0;
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
         if (matriz[i][j] > maxv)
         {
            maxv = matriz[i][j];
            maxi = i;
            maxj = j;
         }
         
      }
   }
   printf("Maior valor: %d\nLinha: %d\nColuna: %d",maxv,maxi+1,maxj+1);
   return 0;
}
