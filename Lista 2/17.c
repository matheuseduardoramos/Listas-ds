#include <stdio.h>
#include <stdlib.h>
main()
{
   int n = 1000;
   while (n < 10000)
   {
      if (n == (((n / 100) + (n % 100)) * ((n / 100) + (n % 100))))
         printf("%d\n", n);
      n++;
   }
return 0;
}

