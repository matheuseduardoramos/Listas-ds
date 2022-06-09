#include <stdio.h>
#include <stdlib.h>
 
main()
{
   float vetor[10],aux;
   int i,j;
   for ( i = 0; i < 10; i++)
   {
      scanf("%f",&vetor[i]);
   }
   
      for (i = 9; i >= 1; i--)
   {
      for (j = 0; j < i; j++)
      {
         if (vetor[j] > vetor[j + 1])
         {
            aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
 
   for ( i = 0; i < 10; i++)
   {
      printf("%f\n",vetor[i]);
   }
   
 
   return 0;
}
