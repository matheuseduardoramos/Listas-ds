#include <stdio.h>
#include <stdlib.h>
main()
{
   int i, vetor[15],j,max = 15;
   for (i = 0; i < 15; i++)
   {
      scanf("%d", &vetor[i]);
   }
   for (i = 0; i < 15; i++)
   {
      if (vetor[i] == 0)
      {
         for ( j = i; j < max; j++)
         {
            vetor[j] = vetor[j+1];
         }
         max--;
      }
     
   }
for ( i = 0; i < max; i++)
{
   printf("%d\n",vetor[i]);
}
 
   return 0;
}
