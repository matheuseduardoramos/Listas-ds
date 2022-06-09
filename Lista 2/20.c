#include <stdio.h>
   #include <stdlib.h>
   main()
   {
      int i, div = 0, num;
         printf("Digite um numero: ");
         scanf("%d",&num);
         for (i = 2; i <= (num / 2); i++)
         {
            if ((num % i ) == 0)
            {
               div++;
               break;
            }
         }
         if (div == 0)
         {
            printf("eh primo!");
         }else
         {
            printf("nao eh primo!");
         }
         
      return 0;
   
}
