 #include <stdio.h>
   #include <stdlib.h>
   main()
   {
      int i, soma, num;
      for (num = 1; num <= 100; num++)
      {
         soma = 0;
         for (i = 1; i <= (num / 2); i++)
         {
            if ((num % i ) == 0)
            {
               soma = soma + i;
            }
         }
         if (num == soma)
         {
            printf("%d\n", num);
         }
      }
      return 0;
   
}
