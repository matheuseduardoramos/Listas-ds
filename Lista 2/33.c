
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,soma1, soma2;

    for (num = 2; num <= 1000; num++)
    {
        soma1 = 1;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                soma1 += i;
        }
        soma2 = 1;
        if (soma1 != num)
            for (int i = 2; i <= soma1 / 2; i++)
            {
                if (soma1 % i == 0)
                    soma2 += i;
            }
        if (soma2 == num)
        {
            printf("\n%d e %d sao amigos\n", num, soma1);
        }
    }

    return 0;
}
