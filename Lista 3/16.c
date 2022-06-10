#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v[10], num, menor = 0;
   for (int i = 0; i < 10; i++)
   {
      scanf("%d", &v[i]);
   }
   scanf("%d", &num);
   for (int i = 0; i < 10; i++)
   {
      if (v[i] < num)
      {
         menor++;
      }
   }
   printf("%d numeros do vetor sao menores que %d", menor, num);
   return 0;
}
