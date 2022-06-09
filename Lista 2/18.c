#include <stdio.h>
#include <stdlib.h>
main()
{
   int i, n1 = 0,n2 = 1,aux;
   aux = n1+n2;
   printf("%d - %d ",n1,n2);
   for (i = 3; i < 16; ++i)
   {
      printf("- %d ", aux);
      n1 = n2;
      n2 = aux;
      aux = n1 + n2;
   }
   return 0;
}

