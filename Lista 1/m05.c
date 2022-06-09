#include <stdio.h>
#include <stdlib.h>
 
main()
{
   int matriz[5][5], i, j, busca, bi = -1, bj = -1;
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 5; j++)
      {
         scanf("%d", &matriz[i][j]);
      }
   }
   printf("digite o valor para procurar na matriz: ");
   scanf("%d",&busca);
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 5; j++)
      {
         if (matriz[i][j] == busca)
         {
            bi = i;
            bj = j;
            break;
         }
      }
   }
   if (bj != -1 & bi != -1)
   {
      printf("Valor na posicao: %d,%d",bi+1,bj+1);
   }else
   {
      printf("valor nao encontrado!");
   }
   
   
   return 0;
}
