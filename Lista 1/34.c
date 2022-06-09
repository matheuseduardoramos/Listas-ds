#include <stdio.h>
#include <stdlib.h>
main()
{
   int i, vetor[10], j, aux;
   for (i = 0; i < 10; i++)
   {
      do
      {
         scanf("%d", &vetor[i]);
         if (i != 0)
         {
            for (j = 0; j < i; j++)
            {
               if (vetor[j] == vetor[i])
               {
                  aux = vetor[j];
               }
            }
         }
         if (aux == vetor[i])
           
         {
            printf("numero ja inserido, tente outro: ");
         }
 
      } while (aux == vetor[i]);
   }
 
   for (i = 0; i < 10; i++)
   {
      printf("%d\n", vetor[i]);
   }
 
   return 0;
}
