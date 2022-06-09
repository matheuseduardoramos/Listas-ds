#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,div,maior = 0;
   scanf("%d",&num);

   for (int i = 4; i < num; i++)
   {
       div = 0;
       for ( int j = 2; j <= i/2; j++)
       {
           if (i % j == 0)
           {
               div++;
               break;
           }
           
       }
       if (div == 0)
       {
           if (i > maior)
           {
               maior = i;
           }
           
       }
       
   }
   printf("maior primo = %d",maior);
    return 0;
}
