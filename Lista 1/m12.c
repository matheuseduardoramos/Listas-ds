#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[3][3], i, j, matrizt[3][3];
 
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &matriz[i][j]);
         
      }
   }
   printf("matriz normal:\n");
   for (i = 0; i < 3; i++)
   {
      printf("\n");
      for (j = 0; j < 3; j++)
      {
         printf(" %d  ",matriz[i][j]);
      }
   }
printf("\nMatriz Transposta: \n");
   for (i = 0; i < 3; i++)
   {
   
      for (j = 0; j < 3; j++)
      {
         matrizt[i][j] = matriz[j][i];
      }
   }
   for (i = 0; i < 3; i++)
   {
      printf("\n");
      for (j = 0; j < 3; j++)
      {
         printf(" %d  ",matrizt[i][j]);
      }
   }
 
   return 0;
}
