#include <stdio.h>
#include <stdlib.h>

int main()
{
   float l,area;
   int n;

   printf("Digite o numero de lados do poligono: ");
   scanf("%d", &n);
   if (n == 3 || n == 4 || n == 6)
   {
      printf("Digite o tamanho do lado: ");
      scanf("%f", &l);
      switch (n)
      {
      case 3:
         area = l * l *1.73/4;
         break;

      case 4:
         area = l * l;
         break;

      case 6:
         area = 6 * l * l *1.73/4;
         break;

      default:
         break;
      }
      printf("Area = %.2f",area);
   }
   else
   {
         printf("nao sei calcular essa area!");
   }
   
   return 0;
}
